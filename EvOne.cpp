#include "EvOne.h"
#include <iostream>

bool EvOne::processFrom(State *state) {
    std::cout <<"procesing event ONE " <<typeid(state).name() <<std::endl;
    return state->processEvent(this);
} 

 EvOne::EvOne(){
    return;
} 

 EvOne::~EvOne(){
    return;
} 