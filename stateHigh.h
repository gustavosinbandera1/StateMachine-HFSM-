#pragma once
#include "state.h"

class StateHigh : public State
{
public:
    StateHigh(int noOf){
        this->noOfRegions = noOf;
    };
    virtual ~StateHigh(){};

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
    StateHigh(const StateHigh &);
    StateHigh &operator=(const StateHigh &);
};