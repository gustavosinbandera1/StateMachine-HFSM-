#include <iostream>
#include "airConCtrl.h"
#include "evPowerBtn.h"
#include "EvOne.h"


/*
g++ main.cpp events.cpp EvDefault.cpp  state.cpp stateMachine.cpp parallelState.cpp stateCooler.cpp evModeBtn.cpp stateMode.cpp stateStopped.cpp  airConCtrl.cpp stateSpeed.cpp stateLow.cpp stateHigh.cpp  airConCtrlCtx.cpp EvOne.cpp evPowerBtn.cpp stateHeater.cpp stateOperating.cpp -o  test 
*/
 

int main(){
AirConCtrl *air = new AirConCtrl();
EvPowerBtn evPowerBtn;
EvOne evOne;

air->dispatchEvent(&evPowerBtn);
//air->dispatchEvent(&evPowerBtn);
//air->dispatchEvent(&evOne);
    return 0;
}