/*
  ==============================================================================

    SomeLongProcess.cpp
    Created: 13 Feb 2020 2:40:35pm
    Author:  julien@macmini

  ==============================================================================
*/

#include "SomeLongProcess.h"

SomeLongProcess::SomeLongProcess() : Thread ("Long Process Thread")
{
    DBG("SOME LONG PROCESS: CONSTRUCTOR CALLED");
    
//    startThread();
    DBG("SOME LONG PROCESS: CONSTRUCTOR EXIT");
}

void SomeLongProcess::start()
{
    startThread();
}

SomeLongProcess::~SomeLongProcess()
{
    DBG("SOME LONG PROCESS: DESTRUCTOR CALLED");
    stopThread (2000);
}

void SomeLongProcess::run()
{
    while (! threadShouldExit())
    {
        count++;
        DBG("SOME LONG PROCESS: just wasting cpu :" << count);
        
        if (count > 200000){
            // because this is a background thread, we mustn't do any UI work without
            // first grabbing a MessageManagerLock..
            const MessageManagerLock mml (Thread::getCurrentThread());
            
            if (! mml.lockWasGained())  // if something is trying to kill this job, the lock
                return;                 // will fail, in which case we'd better return..
            
            // now we've got the UI thread locked, we can mess about with the components
            signalThreadShouldExit();
        }
    }
}
