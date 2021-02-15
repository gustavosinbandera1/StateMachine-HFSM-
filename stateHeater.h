#pragma once
#include "state.h"
#include "airConCtrlCtx.h"
#include "stateMode.h" //parent of this state

class StateMode;
class State;
class StateHeater : public State
{
public:
    StateHeater(StateMode *ancestor, AirConCtrlCtx *context);
    virtual ~StateHeater(){};
    bool processEvent(EvModeBtn *event);

protected:
    void onEntryAction();
    void onExitAction();

private:
    StateHeater(const StateHeater &);
    StateHeater &operator=(const StateHeater &);
    StateMode *ancestor;
    AirConCtrlCtx *context;
};