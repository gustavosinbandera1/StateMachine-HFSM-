#include "stateStopped.h"
#include <iostream>
using namespace std;


 StateStopped::StateStopped(AirConCtrl *ancestor, AirConCtrlCtx *context)
    :ancestor(ancestor),
    context(context){}  

bool StateStopped::processEvent(EvPowerBtn *event)
{
    std::cout << "Proces Event .... State stopped" << std::endl;
    //perform transition here
    return true;
}   