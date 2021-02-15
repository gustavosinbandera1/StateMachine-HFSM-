#pragma once
#include "stateMachine.h"
#include "airConCtrl.h"    //ancester
#include "airConCtrlCtx.h" //context
#include "stateHeater.h"   //state involved in transition
#include "stateCooler.h"   //state involved in transition

class StateMode : public StateMachine
{
public:
    StateMode(AirConCtrl *ancestor, AirConCtrlCtx *ctx);
    //StateMode(){};
    virtual ~StateMode(){};

    //virtual bool dispatchEvent(Event *event);
    //virtual void entry(void);
    //virtual void exit(void);
    //virtual void restoreDeepHistory(void);
    //virtual void restoreShallowHistory();

    bool transition(StateCooler *, EvModeBtn *);
    bool transition(StateHeater *, EvModeBtn *);
    void entryOnFork(void);


protected:
    /*     void onEntryAction();
    void onExitAction(); */
    void setInitDefaultState(void);
    void setShallowHistoryDefaultState(void);
    bool processEvent(EvModeBtn *event);

private:
    StateMode(const StateMode &);
    StateMode &operator=(const StateMode &); 
    AirConCtrl *ancestor;
    AirConCtrlCtx *context;
    StateHeater *heater;
    StateCooler *cooler;
};