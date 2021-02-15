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
    std::cout << "onEntryCooler Action" << std::endl;
}

void StateCooler::onExitAction()
{
    std::cout << "onExitCooler Action" << std::endl;
}
 
bool StateCooler::processEvent(EvModeBtn *event)
{
    std::cout << "Proces Event .... Action" << std::endl;
    //perform transition here
    return true;
}    