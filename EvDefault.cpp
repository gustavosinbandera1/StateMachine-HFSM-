#include "EvDefault.h"
#include <iostream>

bool EvDefault::processFrom(State *state) {
    std::cout <<"procesing event default " << std::endl;
    return state->processEvent(this);
} 

 EvDefault::EvDefault(){
    return;
} 

 EvDefault::~EvDefault(){
    return;
} 