#pragma once
#include "stateMachine.h"

class StateMode : public StateMachine
{
public:
    StateMode(int noOf){
        this->noOfRegions = noOf;
    };
    virtual ~StateMode(){};

    virtual bool dispatchEvent(Event *event);
    virtual void entry(void);
    virtual void exit(void);
    virtual void restoreDeepHistory(void);
    virtual void restoreShallowHistory();

   bool processEvent(EvModeBtn *event);

protected:
    int noOfRegions;
    State **regions;

    void onEntryAction();
    void onExitAction();

private:
    StateMode(const StateMode &);
    StateMode &operator=(const StateMode &);
};