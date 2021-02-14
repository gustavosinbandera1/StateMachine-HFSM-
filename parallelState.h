#include "state.h"
#include "events.h"

class ParallelState : public State
{
public:
    ParallelState(int noOfRegions)
    {
        this->noOfRegions = noOfRegions;
        this->regions = nullptr;
        regions = new State *[noOfRegions];
        for (int i = 0; i < noOfRegions; i++)
        {
            regions[i] = nullptr;
        }
    }
    virtual ~ParallelState()
    {
        delete[] regions;
    };

    virtual bool dispatchEvent(Event *event);
    virtual void entry(void);
    virtual void exit(void);
    virtual void restoreDeepHistory(void);
    virtual void restoreShallowHistory();

protected:
    int noOfRegions;
    State **regions;

private:
    ParallelState(const ParallelState &);
    ParallelState &operator=(const ParallelState &);
};
