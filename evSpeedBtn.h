#pragma once
#include "events.h"
#include "state.h"

class EvSpeedBtn : public Event
{
public:
    virtual bool processFrom(State *state);
    EvSpeedBtn();
    ~EvSpeedBtn();
};