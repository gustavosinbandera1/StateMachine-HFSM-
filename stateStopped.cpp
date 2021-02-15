#include "stateStopped.h"
#include <iostream>
using namespace std;


/* void StateStopped::onEntryAction()
{
    std::cout << "onEntryCooler Action" << std::endl;
}

void StateStopped::onExitAction()
{
    std::cout << "onExitCooler Action" << std::endl;
}
 */
bool StateStopped::processEvent(EvPowerBtn *event)
{
    std::cout << "Proces Event .... State stopped" << std::endl;
    //perform transition here
    return true;
}   