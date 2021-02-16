#include "stateCooler.h"
#include <iostream>
using namespace std;


/* StateCooler::StateCooler(StateMode *ancestor, AirConCtrlCtx *context)
    :ancestor(ancestor),
    context(context)
{

}  */

void StateCooler::onEntryAction()
{
    std::cout << "onEntry Cooler Action" << std::endl;
}

void StateCooler::onExitAction()
{
    std::cout << "onExitCooler Action STATE COOLER" << std::endl;
}
 
bool StateCooler::processEvent(EvModeBtn *event)
{
    std::cout << "Proces Event .... STATE COOLER Action" << std::endl;
    return true;
}    