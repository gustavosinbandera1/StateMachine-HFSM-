#pragma once
#include "state.h"

class StateHeater : public State
{
public:
    StateHeater(int noOf){
        this->noOfRegions = noOf;
    };
    virtual ~StateHeater(){};

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
    StateHeater(const StateHeater &);
    StateHeater &operator=(const StateHeater &);
};