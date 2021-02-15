#pragma once
#include "stateMachine.h"

class StateStopped : public StateMachine
{
public:
    StateStopped(void){
    };
    virtual ~StateStopped(){};

    virtual bool dispatchEvent(Event *event);
    virtual void entry(void);
    virtual void exit(void);
    virtual void restoreDeepHistory(void);
    virtual void restoreShallowHistory();

   bool processEvent(EvPowerBtn *event);

protected:
    //void onEntryAction();
    //void onExitAction();

private:
    StateStopped(const StateStopped &);
    StateStopped &operator=(const StateStopped &);
};