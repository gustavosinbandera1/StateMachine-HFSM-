#include "stateMode.h"
#include <iostream>
using namespace std;


void StateMode::onEntryAction()
{
    std::cout << "onEntryCooler Action" << std::endl;
}

void StateMode::onExitAction()
{
    std::cout << "onExitCooler Action" << std::endl;
}

bool StateMode::processEvent(EvModeBtn *event)
{
    std::cout << "Proces Event .... Action" << std::endl;
    //perform transition here
    return true;
}   