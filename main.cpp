#include <iostream>
#include "state.h"
#include "events.h"
#include "EvDefault.h"
#include "airConCtrl.h"
#include "stateMode.h"
#include "stateStopped.h"
#include "airConCtrl.h"

EvDefault aEvDefault; 

int main(){
AirConCtrl *air = new AirConCtrl();

//StateStopped stopped = new StateStopped(air,);
    return 0;
}