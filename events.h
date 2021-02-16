#pragma once

class EvDefault;
class State;
class Event
{
private:

public:
    Event(void){return;}
    virtual ~Event(){return ; }
    virtual bool processFrom(State *) = 0;
};
