#pragma once
#include "stateMachine.h"
#include "stateStopped.h"
//#include "stateOperating.h"

class AirConCtrl : public StateMachine
{
public:
    AirConCtrl(void){
    };
    virtual ~AirConCtrl(){};
    bool processEvent(EvPowerBtn *event);
    void transition(StateStopped* stateStopped, EvPowerBtn *evPowerBtn );
    ///void transition(StateOperating* stateOperating, EvPowerBtn evPowerBtn );

protected:
private:
    AirConCtrl(const AirConCtrl &);
    AirConCtrl &operator=(const AirConCtrl &);
};