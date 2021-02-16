#include "stateMachine.h"
#include "EvDefault.h"
#include <iostream>

bool StateMachine::dispatchEvent(Event *event)
{

    //EvDefault aEvDefault;
    std::cout << "dispaching event --> " << typeid(event).name() << std::endl;
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>going to dispatch event>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    bool retval = this->activeSubstate->dispatchEvent(event) || event->processFrom(this);
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Event Dispached>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;

    //aEvDefault.processFrom(this);
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
    std::cout << "saliendo---------------------------------" << std::endl;
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
      previousSubstate(NULL){};