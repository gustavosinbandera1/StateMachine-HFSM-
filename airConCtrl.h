#pragma once
#include "stateMachine.h"
#include "stateStopped.h"
#include "airConCtrlCtx.h"
//#include "stateOperating.h"
class StateStopped;
class AirConCtrl : public StateMachine
{
public:
    AirConCtrl(void);
    /* AirConCtrl(void){
        std::cout <<"Constructor AirConCtx"<<std::endl;
        this->activeSubstate = new State();
        this->previousSubstate = new State();
        this->context = new AirConCtrlCtx();
        this->stopped = new StateStopped(this, context);
    }; */
    virtual ~AirConCtrl(){};
    bool processEvent(EvPowerBtn *event);
    bool transition(StateStopped *stateStopped, EvPowerBtn *evPowerBtn);
    ///void transition(StateOperating* stateOperating, EvPowerBtn evPowerBtn );

protected:
private:
    AirConCtrl(const AirConCtrl &);
    AirConCtrl &operator=(const AirConCtrl &);
    AirConCtrlCtx *context;
    StateStopped *stopped;
};