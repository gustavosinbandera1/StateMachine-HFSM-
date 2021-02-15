#include "stateCooler.h"
#include <iostream>
using namespace std;


void StateCooler::onEntryAction()
{
    std::cout << "onEntryCooler Action" << std::endl;
}

void StateCooler::onExitAction()
{
    std::cout << "onExitCooler Action" << std::endl;
}

bool StateCooler::processEvent(EvModeBtn *event)
{
    //perform transition here
    return true;
}   