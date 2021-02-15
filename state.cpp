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
 

