#pragma once
#include "stateMachine.h"

class StateSpeed : public StateMachine
{
public:
    StateSpeed(int noOf){
        this->noOfRegions = noOf;
    };
    virtual ~StateSpeed(){};

    virtual bool dispatchEvent(Event *event);
    virtual void entry(void);
    virtual void exit(void);
    virtual void restoreDeepHistory(void);
    virtual void restoreShallowHistory();

   bool processEvent(EvSpeedBtn *event);

protected:
    int noOfRegions;
    State **regions;

    void onEntryAction();
    void onExitAction();

private:
    StateSpeed(const StateSpeed &);
    StateSpeed &operator=(const StateSpeed &);
};