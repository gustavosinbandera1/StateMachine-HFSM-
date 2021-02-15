#pragma once

class AirConCtrlCtx
{
public:
    AirConCtrlCtx(void){
    };
    virtual ~AirConCtrlCtx(){};
    void coolOn(){};
    void coolOff(){};


protected:
private:
    AirConCtrlCtx(const AirConCtrlCtx &);
    AirConCtrlCtx &operator=(const AirConCtrlCtx &);
};