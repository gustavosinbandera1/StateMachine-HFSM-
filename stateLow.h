#pragma once
#include "state.h"

class StateLow : public State
{
public:
    StateLow(int noOf){
        this->noOfRegions = noOf;
    };
    virtual ~StateLow(){};

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
    StateLow(const StateLow &);
    StateLow &operator=(const StateLow &);
};