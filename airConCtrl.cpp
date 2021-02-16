#include "airConCtrl.h"
#include <iostream>

#include "EvDefault.h"
using namespace std;

bool AirConCtrl::processEvent(EvPowerBtn *event)
{
    //do transition here
    std::cout << "Proces Event  Button Power.... air controll" << std::endl;
    //perform transition here
    this->transition(this->stateOperating, event);
    return true;
}

AirConCtrl::AirConCtrl(void)
{
    std::cout << "Constructor AirConCtx" << std::endl;
    this->activeSubstate = new State();
    this->previousSubstate = new State();
    this->context = new AirConCtrlCtx();
    this->stopped = new StateStopped(this, context);
    this->stateOperating = new StateOperating(this, context);
};

bool AirConCtrl::transition(StateStopped *stateStopped, EvPowerBtn *evPowerBtn)
{
    std::cout << "Doing a transition" << std::endl;
     if (this->context->tempIsNormal(110))
    {
        std::cout << "Es menor" << std::endl;
        this->activeSubstate->exit();
        this->context->enableButtons();
        this->activeSubstate = this->stopped;
        return true;
    } 
    return false;
} 

bool AirConCtrl::transition(StateOperating *stateOperating, EvPowerBtn *evPowerBtn)
{
    std::cout << "Doing a transition STATE OPERATING ........." << std::endl;
     if (this->context->tempIsNormal(110))
    {
        std::cout << "Es menor" << std::endl;
        this->activeSubstate->exit();
        this->context->enableButtons();
        this->activeSubstate = this->stopped;
        return true;
    } 
    return false;
}  