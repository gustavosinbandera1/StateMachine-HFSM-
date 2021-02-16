#include "stateMachine.h"
#include "EvDefault.h"
#include <iostream>
extern EvDefault aEvDefault;

bool StateMachine::dispatchEvent(Event *event)
{

    std::cout << "going to dispatch event" << std::endl;
    bool retval = this->activeSubstate->dispatchEvent(event) || event->processFrom(this);
    std::cout << "end-----------going to dispatch event---------end" << std::endl;
    aEvDefault.processFrom(this);
    return retval;
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

StateMachine::StateMachine(void)
    : activeSubstate(NULL),
      previousSubstate(NULL){
          /*activeSubstate = nullptr;
        previousSubstate = nullptr; */
      };