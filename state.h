#pragma once
#include "events.h"

class EvDefault;
class State
{
private:
public:
    State();
    virtual ~State(){return;};
    virtual bool dispatchEvent(Event *event);
    virtual void entry(void);
    virtual void exit(void);
    virtual void restoreDeepHistory(void);
    virtual void restoreShallowHistory(void);

    //general events
    virtual bool processEvent(EvDefault *) { return false; }

    //application specific events
    //  virtual bool processEvent(EvPowerBtn *) { return false; }
    // virtual bool processEvent(EvModeBtn *) { return false; }
    // virtual bool processEvent(EvSpeedBtn *) { return false; }
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

/* 

class StateMachine : public State
{
public:
    StateMachine(void){
        activeSubstate = nullptr;
        previousSubstate = nullptr;
    };
    virtual ~StateMachine(){return;};

    bool dispatchEvent(Event *event) override;
    void entry(void) override;
    void exit(void);
    void restoreDeepHistory(void);
    void restoreShallowHistory(void);
    
protected:
    State *activeSubstate;
    State *previousSubstate;

private:
    StateMachine(const StateMachine &);
    StateMachine &operator=(const StateMachine &);
};
 
 

class ParallelState : public State
{
public:
    ParallelState(int noOfRegions);
    virtual ~ParallelState();

    virtual bool dispatchEvent(Event *event);
    virtual void entry(void);
    virtual void exit(void);
    virtual void restoreDeepHistory(void);
    virtual void restoreShallowHistory();
protected:
    int noOfRegions;
    State **regions;
private:
    ParallelState(const ParallelState &);
    ParallelState& operator=(const ParallelState &);
};  */