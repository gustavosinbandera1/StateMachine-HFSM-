#include "EvDefault.h"

bool EvDefault::processFrom(State *state) {
    return state->processEvent(this);
} 

 EvDefault::EvDefault(){
    return;
} 

 EvDefault::~EvDefault(){
    return;
} 