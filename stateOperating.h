#pragma once
#include "parallelState.h"

class StateOperating : public ParallelState
{
public:
    StateOperating()
    StateOperating(int noOf){
        this->noOfRegions = noOf;
    };
    virtual ~StateOperating(){};

    virtual bool dispatchEvent(Event *event);
    virtual void entry(void);
    virtual void exit(void);
    virtual void restoreDeepHistory(void);
    virtual void restoreShallowHistory();

   bool processEvent(EvPowerBtn *event);

protected:
    int noOfRegions;
    State **regions;

    void onEntryAction();
    void onExitAction();

private:
    StateOperating(const StateOperating &);
    StateOperating &operator=(const StateOperating &);
};