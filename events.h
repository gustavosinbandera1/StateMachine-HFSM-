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



class EvModeBtn : public Event {
    public:
    virtual bool processFrom(State *state);
};

class EvSpeedBtn : public Event {
    public:
    virtual bool processFrom(State *state);
};

class EvPowerBtn : public Event {
    public:
    virtual bool processFrom(State *state);
};

class EvOne : public Event {
    public:
    virtual bool processFrom(State *state);
}; 


//extern EvDefault aEvDefault;
