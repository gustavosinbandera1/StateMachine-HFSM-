#pragma once
#include "parallelState.h"
//#include "airConCtrl.h"

#define NUM_OF_ZONES 2
class AirConCtrl;
class AirConCtrlCtx;
class StateOperating : public ParallelState
{
public:
    StateOperating(AirConCtrl *ancestor, AirConCtrlCtx *context) : ParallelState(NUM_OF_ZONES)
                ,ancestor(ancestor),
                context(context){}
    virtual ~StateOperating(){};
    bool processEvent(EvPowerBtn *event);

protected:
    void onEntryAction();
    void onExitAction();

private:
    StateOperating(const StateOperating &);
    StateOperating &operator=(const StateOperating &);
    AirConCtrl *ancestor;
    AirConCtrlCtx *context;
};