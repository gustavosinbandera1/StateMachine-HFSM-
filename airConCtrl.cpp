#include "airConCtrl.h"
#include <iostream>
using namespace std;


void AirConCtrl::onEntryAction()
{
    std::cout << "onEntryCooler Action" << std::endl;
}

void AirConCtrl::onExitAction()
{
    std::cout << "onExitCooler Action" << std::endl;
}

bool AirConCtrl::processEvent(EvPowerBtn *event)
{
    std::cout << "Proces Event .... Action" << std::endl;
    //perform transition here
    return true;
}   