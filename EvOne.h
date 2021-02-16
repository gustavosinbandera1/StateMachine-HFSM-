#pragma once

#include "events.h"
#include "state.h"


class EvOne : public Event
{
public:
    virtual bool processFrom(State *state) override;
    EvOne();
    ~EvOne();
};