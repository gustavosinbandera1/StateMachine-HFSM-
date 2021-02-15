#include "evModeBtn.h"
#include <iostream>

bool EvModeBtn::processFrom(State* state){
    std::cout <<"procesing event modeButton... " << std::endl;
    return state->processEvent(this);
}

 EvModeBtn::EvModeBtn(){
    return;
} 

 EvModeBtn::~EvModeBtn(){
    return;
} 