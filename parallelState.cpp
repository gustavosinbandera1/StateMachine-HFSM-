#include "parallelState.h"

/* ParallelState::ParallelState(int noOfRegions) : noOfRegions(noOfRegions), regions(nullptr)
{
    regions = new State *[noOfRegions];
    for (int i = 0; i < noOfRegions; i++)
    {
        regions[i] = nullptr;
    }
} */
/* 
ParallelState::~ParallelState()
{
    delete[] regions;
} */

bool ParallelState::dispatchEvent(Event *event)
{
    bool retval = false;
    for (int i = 0; i < noOfRegions; i++)
    {
        bool result = (regions[i])->dispatchEvent(event);
        retval = result || retval;
    }
    retval = retval || event->processFrom(this);
    //aEvDefault.processFrom(this);
    return retval;
}

void ParallelState::entry(void)
{
    this->onEntryAction();
    for (int i = 0; i < noOfRegions; i++)
    {
        (regions[i])->entry();
    }
}

void ParallelState::exit(void)
{
    for (int i = 0; i < noOfRegions; i++)
    {
        (regions[i])->exit();
    }
    this->onExitAction();
}

void ParallelState::restoreDeepHistory()
{
    for (int i = 0; i < noOfRegions; i++)
    {
        (regions[i])->restoreDeepHistory();
    }
}
void ParallelState::restoreShallowHistory()
{
    for (int i = 0; i < noOfRegions; i++)
    {
        (regions[i])->restoreShallowHistory();
    }
}