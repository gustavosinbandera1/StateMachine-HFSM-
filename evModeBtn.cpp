#include "evModeBtn.h"


bool EvModeBtn::processFrom(State* state){
    return state->processEvent(this);
}

 EvModeBtn::EvModeBtn(){
    return;
} 

 EvModeBtn::~EvModeBtn(){
    return;
} 