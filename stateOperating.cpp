#include "stateOperating.h"
#include <iostream>
using namespace std;


void StateOperating::onEntryAction()
{
    std::cout << "onEntry  STATE OPERATING Action" << std::endl;
}

void StateOperating::onExitAction()
{
    std::cout << "onExit  STATE OPERATING Action" << std::endl;
} 

bool StateOperating::processEvent(EvPowerBtn *event)
{
    std::cout << "Proces Event .... Action    state operarating process event//////////////////" << std::endl;
    //perform transition here
    return true;
}   