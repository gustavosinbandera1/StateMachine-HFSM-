#include "airConCtrl.h"
#include <iostream>

#include "EvDefault.h"
using namespace std;

bool AirConCtrl::processEvent(EvPowerBtn *event)
{
    //do transition here
    std::cout << "Proces Event  Button Power.... air controll" << std::endl;
    //perform transition here
    this->transition(this->stopped,event);
    return true;
}

AirConCtrl::AirConCtrl(void)
{
    std::cout << "Constructor AirConCtx" << std::endl;
    this->activeSubstate = new State();
    this->previousSubstate = new State();
    this->context = new AirConCtrlCtx();
    this->stopped = new StateStopped(this, context);
};

bool AirConCtrl::transition(StateStopped *stateStopped, EvPowerBtn *evPowerBtn)
{
    std::cout << "Doing a transition" << std::endl;
     if (this->context->tempIsNormal())
    {
        this->activeSubstate->exit();
        this->context->enableButtons();
        this->activeSubstate = this->stopped;
        return true;
    } 
    return false;
} 