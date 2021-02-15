#include "stateMode.h"
#include <iostream>
using namespace std;

bool StateMode::processEvent(EvModeBtn *event)
{
    std::cout << "Proces Event .... Action" << std::endl;
    //perform transition here
    return true;
}

bool StateMode::transition(StateCooler *, EvModeBtn *)
{
    this->activeSubstate->exit();
    this->activeSubstate = this->heater;
    this->activeSubstate->entry();
    return true;
}
bool StateMode::transition(StateHeater *, EvModeBtn *)
{
    this->activeSubstate->exit();
    this->activeSubstate = this->cooler;
    this->activeSubstate->entry();
    return true;
}

void StateMode::setInitDefaultState(void)
{
    this->activeSubstate = this->heater;
}

void StateMode::setShallowHistoryDefaultState(void)
{
    this->activeSubstate = this->cooler;
}

void StateMode::entryOnFork(){
    this->onEntryAction();
    this->restoreShallowHistory();
    this->activeSubstate->entry();
}

/* StateMode::StateMode(AirConCtrl ancestor, AirConCtrlCtx airConCtx)
:ancestor(ancestor)
,context(context)
,heater(new StateHeater(this,context))
,cooler(new StateCooler(this, context)){
    return;
} */