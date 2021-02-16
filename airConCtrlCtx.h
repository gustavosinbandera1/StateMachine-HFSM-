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
    bool tempIsNormal(int temp){
            if(temp < 127){
               return true; 
            }
        return false;
    }
    void enableButtons(){
        //enabling buttons
        std::cout << "Enabling Buttons" << std::endl;
    }


protected:
private:
    AirConCtrlCtx(const AirConCtrlCtx &);
    AirConCtrlCtx &operator=(const AirConCtrlCtx &);
};