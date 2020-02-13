/*
  ==============================================================================

    SomeLongProcess.h
    Created: 13 Feb 2020 2:40:35pm
    Author:  julien@macmini

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class SomeLongProcess: public Thread
{
public:
    SomeLongProcess ();
    ~SomeLongProcess();
    
    void start();
    
    void run() override;
    
private:
    int count = 0;
};
