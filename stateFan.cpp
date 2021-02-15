#include "stateFan.h"
#include <iostream>
using namespace std;


void StateFan::onEntryAction()
{
    std::cout << "onEntryCooler Action" << std::endl;
}

void StateCooler::onExitAction()
{
    std::cout << "onExitCooler Action" << std::endl;
}

bool StateFan::processEvent(EvSpeedBtn *event)
{
    std::cout << "Proces Event .... Action" << std::endl;
    //perform transition here
    return true;
}   