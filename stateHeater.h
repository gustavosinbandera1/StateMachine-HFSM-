#pragma once
#include "state.h"

class StateHeater : public State
{
public:
    StateHeater(void){
    };
    virtual ~StateHeater(){};

    virtual bool dispatchEvent(Event *event);
    virtual void entry(void);
    virtual void exit(void);
    virtual void restoreDeepHistory(void);
    virtual void restoreShallowHistory();

   bool processEvent(EvModeBtn *event);
   
protected:
    void onEntryAction();
    void onExitAction();

private:
    StateHeater(const StateHeater &);
    StateHeater &operator=(const StateHeater &);
};