#include "evPowerBtn.h"
#include <iostream>

bool EvPowerBtn::processFrom(State *state)
{
    bool retval;
    std::cout << "procesing event Power Button... " << std::endl;
    retval =  state->processEvent(this);
    std::cout<<"retval: " << retval <<std::endl;
    return retval;
}

EvPowerBtn::EvPowerBtn()
{
    return;
}

EvPowerBtn::~EvPowerBtn()
{
    return;
}