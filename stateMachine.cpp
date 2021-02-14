#include "stateMachine.h"

bool StateMachine::dispatchEvent(Event *event)
{
    bool retavl = activeSubstate->dispatchEvent(event) || event->processFrom(this);
    //aEvDefault.processFrom(this);
    return retavl;
}

void StateMachine::entry(void)
{
    this->onEntryAction();
    this->setInitDefaultState();
    this->activeSubstate->entry();
}

void StateMachine::exit(void)
{
    this->activeSubstate->exit();
    this->previousSubstate = this->activeSubstate;
    this->activeSubstate = nullptr;
    this->onExitAction();
}

void StateMachine::restoreDeepHistory(void)
{
    this->activeSubstate = this->previousSubstate;
    if (nullptr == this->activeSubstate)
    {
        this->setDeepHistoryDefaultState();
    }
    this->activeSubstate->restoreDeepHistory();
}

void StateMachine::restoreShallowHistory(void)
{
    this->activeSubstate = this->previousSubstate;
    if (nullptr == this->activeSubstate)
    {
        this->setShallowHistoryDefaultState();
    }
}  