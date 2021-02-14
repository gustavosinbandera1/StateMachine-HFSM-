#include "state.h"
 
bool State::dispatchEvent(Event *event)
{
    return event->processFrom(this);
}

void State::entry(void)
{
    this->onEntryAction();
}

void State::exit(void)
{
    this->onExitAction();
}
void State::onEntryAction(void)
{
    return;
}
void State::onExitAction(void)
{
    return;
}

 void State::setInitDefaultState(void)
{
    return;
}
 
void State::setDeepHistoryDefaultState(void)
{
    return;
}

void State::setShallowHistoryDefaultState(void)
{
    return;
}


void State::restoreDeepHistory(void)
{
    return;
}

void State::restoreShallowHistory(void)
{
    return;
}
 



 
/* StateMachine::StateMachine(void) : activeSubstate(nullptr), previousSubstate(nullptr)
{
    return;
} */

/* StateMachine::~StateMachine(void)
{
    return;
} */
/* 
bool StateMachine::dispatchEvent(Event *event)
{
    bool retavl = activeSubstate->dispatchEvent(event) || event->processFrom(this);
    //aEvDefault.processFrom(this);
    return retavl;
}

void StateMachine::entry(void)
{
    this->onEntryAction();
    this->setInitDefaultState();
    this->activeSubstate->entry();
}

void StateMachine::exit(void)
{
    this->activeSubstate->exit();
    this->previousSubstate = this->activeSubstate;
    this->activeSubstate = nullptr;
    this->onExitAction();
}

void StateMachine::restoreDeepHistory(void)
{
    this->activeSubstate = this->previousSubstate;
    if (nullptr == this->activeSubstate)
    {
        this->setDeepHistoryDefaultState();
    }
    this->activeSubstate->restoreDeepHistory();
}

void StateMachine::restoreShallowHistory(void)
{
    this->activeSubstate = this->previousSubstate;
    if (nullptr == this->activeSubstate)
    {
        this->setShallowHistoryDefaultState();
    }
} 


 */



/* 
ParallelState::ParallelState(int noOfRegions) : noOfRegions(noOfRegions), regions(nullptr)
{
    regions = new State *[noOfRegions];
    for (int i = 0; i < noOfRegions; i++)
    {
        regions[i] = nullptr;
    }
}

ParallelState::~ParallelState()
{
    delete[] regions;
}

bool ParallelState::dispatchEvent(Event *event)
{
    bool retval = false;
    for (int i = 0; i < noOfRegions; i++)
    {
        bool result = (regions[i])->dispatchEvent(event);
        retval = result || retval;
    }
    retval = retval || event->processFrom(this);
    aEvDefault.processFrom(this);
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
} */