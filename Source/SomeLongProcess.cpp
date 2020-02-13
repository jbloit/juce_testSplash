/*
  ==============================================================================

    SomeLongProcess.cpp
    Created: 13 Feb 2020 2:40:35pm
    Author:  julien@macmini

  ==============================================================================
*/

#include "SomeLongProcess.h"

SomeLongProcess::SomeLongProcess()
{
    DBG("SOME LONG PROCESS: CONSTRUCTOR CALLED");
    
    for (int i = 0; i < 2000000; ++i){
            DBG("SOME LONG PROCESS: just wasting cpu");
    }
    
    DBG("SOME LONG PROCESS: CONSTRUCTOR EXIT");
}


SomeLongProcess::~SomeLongProcess()
{
    DBG("SOME LONG PROCESS: DESTRUCTOR CALLED");
}
