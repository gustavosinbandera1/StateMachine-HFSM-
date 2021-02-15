#pragma once
#include "events.h"
#include "state.h"

class EvPowerBtn : public Event
{
public:
    virtual bool processFrom(State *state);
    EvPowerBtn();
    ~EvPowerBtn();
};