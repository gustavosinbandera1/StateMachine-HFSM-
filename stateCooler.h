/* #pragma once
#include "state.h"

class StateCooler : public State
{
public:
    StateCooler(int noOf);
    virtual ~ParallelState();

    virtual bool dispatchEvent(Event *event);
    virtual void entry(void);
    virtual void exit(void);
    virtual void restoreDeepHistory(void);
    virtual void restoreShallowHistory();
protected:
    int noOfRegions;
    State **regions;
private:
    //ParallelState(const ParallelState &);
    //ParallelState& operator=(const ParallelState &);
}; */