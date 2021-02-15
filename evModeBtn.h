#include "events.h"
#include "state.h"

class EvModeBtn : public Event
{
public:
    virtual bool processFrom(State *state);
    EvModeBtn();
    ~EvModeBtn();
};