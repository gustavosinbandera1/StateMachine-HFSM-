#include "state.h"

class StateMachine : public State
{
public:
    StateMachine(void){
        activeSubstate = nullptr;
        previousSubstate = nullptr;
    }; 
    virtual ~StateMachine() override {return;};

    bool dispatchEvent(Event *event) override;
    void entry(void) override;
    void exit(void);
    void restoreDeepHistory(void);
    void restoreShallowHistory(void);
    
protected:
    State *activeSubstate;
    State *previousSubstate;

private:
    StateMachine(const StateMachine &);
    StateMachine &operator=(const StateMachine &);
};
  