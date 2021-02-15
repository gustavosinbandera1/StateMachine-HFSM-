#include "evPowerBtn.h"


bool EvPowerBtn::processFrom(State* state){
    return state->processEvent(this);
}

 EvPowerBtn::EvPowerBtn(){
    return;
} 

 EvPowerBtn::~EvPowerBtn(){
    return;
} 