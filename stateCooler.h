#pragma once
#include "state.h"
#include "airConCtrlCtx.h"
#include "stateMode.h" //parent of this state

class StateMode;
class State;
//class AirConCtx;
class StateCooler : public State
{
public:
    StateCooler(StateMode *ancestor, AirConCtrlCtx *context) : ancestor(ancestor),
                                                               context(context)
    {
        return;
    }
    virtual ~StateCooler(){};
    bool processEvent(EvModeBtn *event);

protected:
    void onEntryAction();
    void onExitAction();

private:
    StateCooler(const StateCooler &);
    StateCooler &operator=(const StateCooler &);
    StateMode *ancestor;
    AirConCtrlCtx *context;
};