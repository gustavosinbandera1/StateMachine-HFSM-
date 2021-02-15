#pragma once
#include "stateMachine.h"

class AirConCtrl : public StateMachine
{
public:
    AirConCtrl(int noOf){
        this->noOfRegions = noOf;
    };
    virtual ~AirConCtrl(){};

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
    AirConCtrl(const AirConCtrl &);
    AirConCtrl &operator=(const AirConCtrl &);
};