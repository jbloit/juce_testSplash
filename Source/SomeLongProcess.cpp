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
    
    startThread();
    DBG("SOME LONG PROCESS: CONSTRUCTOR EXIT");
}


SomeLongProcess::~SomeLongProcess()
{
    DBG("SOME LONG PROCESS: DESTRUCTOR CALLED");
    stopThread (2000);
}

void SomeLongProcess::run()
{
    
    for (int i = 0; i < 200000; ++i){
        DBG("SOME LONG PROCESS: just wasting cpu :" << i);
        
    }
    signalThreadShouldExit();
}
