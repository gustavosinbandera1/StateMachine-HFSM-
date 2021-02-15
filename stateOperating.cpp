#include "stateOperating.h"
#include <iostream>
using namespace std;


void StateOperating::onEntryAction()
{
    std::cout << "onEntryCooler Action" << std::endl;
}

void StateOperating::onExitAction()
{
    std::cout << "onExitCooler Action" << std::endl;
} 

bool StateOperating::processEvent(EvPowerBtn *event)
{
    std::cout << "Proces Event .... Action" << std::endl;
    //perform transition here
    return true;
}   