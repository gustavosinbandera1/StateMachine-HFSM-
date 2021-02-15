#pragma once
#include "state.h"

class StateFan : public State
{
public:
    StateFan(int noOf){
        this->noOfRegions = noOf;
    };
    virtual ~StateCooler(){};

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
    StateFan(const StateFan &);
    StateFan &operator=(const StateFan &);
};