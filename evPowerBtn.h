#pragma once
#include "events.h"
#include "state.h"

class State;
class Event;

class EvPowerBtn : public Event
{
public:
    EvPowerBtn();//{return;};
    virtual ~EvPowerBtn();//{return;};
    //virtual bool processFrom(State *state);
    bool processFrom(State *state) override;
   /*  {
        std::cout << "procesing event Power Button...bb " << std::endl;
        return state->processEvent(this);
    };  */

};