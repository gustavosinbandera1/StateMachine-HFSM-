#include "evSpeedBtn.h"


bool EvSpeedBtn::processFrom(State* state){
    return state->processEvent(this);
}

 EvSpeedBtn::EvSpeedBtn(){
    return;
} 

 EvSpeedBtn::~EvSpeedBtn(){
    return;
} 