#include "airConCtrl.h"
#include <iostream>
using namespace std;

bool AirConCtrl::processEvent(EvPowerBtn *event)
{
    //do transition here
    std::cout << "Proces Event .... air controll" << std::endl;
    //perform transition here
    return true;
}

bool AirConCtrl::transition(StateStopped *stateStopped, EvPowerBtn *evPowerBtn)
{
    if (this->context->tempIsNormal())
    {
        this->activeSubstate->exit();
        this->context->enableButtons();
        //this->activeSubstate = this->Stopped;
        return true;
    }
    return false;
}