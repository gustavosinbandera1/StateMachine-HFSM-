#include "stateSpeed.h"
#include <iostream>
using namespace std;


void StateSpeed::onEntryAction()
{
    std::cout << "onEntryCooler Action" << std::endl;
}

void StateSpeed::onExitAction()
{
    std::cout << "onExitCooler Action" << std::endl;
}

bool StateSpeed::processEvent(EvSpeedBtn *event)
{
    std::cout << "Proces Event .... Action" << std::endl;
    //perform transition here
    return true;
}   