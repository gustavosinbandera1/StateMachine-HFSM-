#pragma once
#include "events.h"

class EvSpeedBtn;
class EvPowerBtn;
class EvModeBtn;
class EvDefault;
class State
{
private:
public:
    State();
    virtual ~State() { return; };
    virtual bool dispatchEvent(Event *event);

    virtual void entry(void);
    virtual void exit(void);
    virtual void restoreDeepHistory(void);
    virtual void restoreShallowHistory(void);

    //general events
    virtual bool processEvent(EvDefault *) { return false; }
    //application specific events
    virtual bool processEvent(EvModeBtn *) { return false; }
    virtual bool processEvent(EvPowerBtn *) { return false; }
    virtual bool processEvent(EvSpeedBtn *) { return false; }
    //virtual bool processEvent(EvOne *) { return false; }
    // virtual bool processEvent(EvOne *) { return false; }

protected:
    virtual void onEntryAction(void);
    virtual void onExitAction(void);
    virtual void setInitDefaultState(void);
    virtual void setShallowHistoryDefaultState(void);
    virtual void setDeepHistoryDefaultState(void);

private:
    State(const State &);
    State &operator=(const State &);
};
