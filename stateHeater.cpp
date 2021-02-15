#include "stateHeater.h"
#include <iostream>
using namespace std;


void StateHeater::onEntryAction()
{
    std::cout << "onEntryCooler Action STATE HEADER" << std::endl;
}

void StateHeater::onExitAction()
{
    std::cout << "onExitCooler Action STRATE HEADER" << std::endl;
}

bool StateHeater::processEvent(EvModeBtn *event)
{
    std::cout << "Proces Event .... Action STATE HEADER" << std::endl;
    //perform transition here
    return true;
}   