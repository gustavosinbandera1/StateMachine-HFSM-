#include <iostream>
#include "state.h"
#include "events.h"
#include "EvDefault.h"
#include "airConCtrl.h"
#include "stateMode.h"
#include "stateStopped.h"
#include "airConCtrlCtx.h"
#include "evPowerBtn.h"

EvDefault aEvDefault; 

int main(){
AirConCtrl *air = new AirConCtrl();
//AirConCtrlCtx *context = new AirConCtrlCtx();
//air->dispatchEvent();

EvPowerBtn evPowerBtn; //= new EvPowerBtn();

air->dispatchEvent(&evPowerBtn);
    return 0;
}