#include "stateLow.h"
#include <iostream>
using namespace std;


void StateLow::onEntryAction()
{
    std::cout << "onEntryCooler Action" << std::endl;
}

void StateLow::onExitAction()
{
    std::cout << "onExitCooler Action" << std::endl;
}

bool StateLow::processEvent(EvSpeedBtn *event)
{
    std::cout << "Proces Event .... Action" << std::endl;
    //perform transition here
    return true;
}   