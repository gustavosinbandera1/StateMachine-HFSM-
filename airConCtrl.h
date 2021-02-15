#pragma once
#include "stateMachine.h"
#include "stateStopped.h"
#include "airConCtrlCtx.h"
//#include "stateOperating.h"
class StateStopped;
class AirConCtrl : public StateMachine
{
public:
    AirConCtrl(void){
        this->context = new AirConCtrlCtx();
    };
    virtual ~AirConCtrl(){};
    bool processEvent(EvPowerBtn *event);
    bool transition(StateStopped* stateStopped, EvPowerBtn *evPowerBtn );
    ///void transition(StateOperating* stateOperating, EvPowerBtn evPowerBtn );

protected:
private:
    AirConCtrl(const AirConCtrl &);
    AirConCtrl &operator=(const AirConCtrl &);
    AirConCtrlCtx *context;
};