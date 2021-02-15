#include "stateHigh.h"
#include <iostream>
using namespace std;


void StateHigh::onEntryAction()
{
    std::cout << "onEntryCooler Action" << std::endl;
}

void StateHigh::onExitAction()
{
    std::cout << "onExitCooler Action" << std::endl;
}

bool StateHigh::processEvent(EvSpeedBtn *event)
{
    std::cout << "Proces Event .... Action" << std::endl;
    //perform transition here
    return true;
}   