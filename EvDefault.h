#include "events.h"
#include "state.h"

class EvDefault : public Event
{
public:
    virtual bool processFrom(State *state) override;
    EvDefault();
    ~EvDefault();
};