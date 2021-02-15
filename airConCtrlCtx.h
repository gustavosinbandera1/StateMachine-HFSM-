#pragma once

class AirConCtrlCtx
{
public:
    AirConCtrlCtx(void){
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