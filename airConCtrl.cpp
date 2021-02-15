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

void AirConCtrl::transition(StateStopped* stateStopped, EvPowerBtn *evPowerBtn ){

}