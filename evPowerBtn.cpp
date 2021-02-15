#include "evPowerBtn.h"
#include <iostream>

 bool EvPowerBtn::processFrom(State* state){
    std::cout <<"procesing event Power Button... " << std::endl;
    return state->processEvent(this);
}
 
/*  EvPowerBtn::EvPowerBtn(){
    return;
} 
 */
/*  EvPowerBtn::~EvPowerBtn(){
    return;
}  */