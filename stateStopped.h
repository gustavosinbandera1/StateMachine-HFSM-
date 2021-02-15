#pragma once
#include "state.h"

class StateStopped : public State
{
public:
    StateStopped(int noOf){
        this->noOfRegions = noOf;
    };
    virtual ~StateStopped(){};

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
    StateStopped(const StateStopped &);
    StateStopped &operator=(const StateStopped &);
};