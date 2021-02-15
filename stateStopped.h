#pragma once
#include "state.h"
#include "airConCtrl.h"
#include "airConCtrlCtx.h"

class State;
class AirConCtrl;
class StateStopped : public State
{
public:
    StateStopped(AirConCtrl *ancestor, AirConCtrlCtx *context);
    virtual ~StateStopped(){};
    bool processEvent(EvPowerBtn *event);

protected:
private:
    StateStopped(const StateStopped &);
    StateStopped &operator=(const StateStopped &);
    AirConCtrl *ancestor;
    AirConCtrlCtx *context;
};