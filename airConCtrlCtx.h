#pragma once
#include "iostream"
class AirConCtrlCtx
{
public:
    AirConCtrlCtx(void){
        std::cout <<"constructor AirConCtrlCtx..."<<std::endl;
    };
    virtual ~AirConCtrlCtx(){};
    void coolOn(){};
    void coolOff(){};
    bool tempIsNormal(){
        return true;
    }
    void enableButtons(){
        //enabling buttons
    }


protected:
private:
    AirConCtrlCtx(const AirConCtrlCtx &);
    AirConCtrlCtx &operator=(const AirConCtrlCtx &);
};