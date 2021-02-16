#pragma once
#include "stateMachine.h"
#include "stateStopped.h"
#include "airConCtrlCtx.h"
#include "stateOperating.h"
class StateStopped;
class StateOperating;
class AirConCtrl : public StateMachine
{
public:
    AirConCtrl(void);
    virtual ~AirConCtrl(){};

    bool processEvent(EvPowerBtn *event);
    bool transition(StateStopped *stateStopped, EvPowerBtn *evPowerBtn);
    bool transition(StateOperating* stateOperating, EvPowerBtn *evPowerBtn );

protected:
private:
    AirConCtrl(const AirConCtrl &);
    AirConCtrl &operator=(const AirConCtrl &);
    AirConCtrlCtx *context;
    StateStopped *stopped;
    StateOperating *stateOperating;
};