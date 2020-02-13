/*
  ==============================================================================

    SplashStar.h
    Created: 13 Feb 2020 2:21:59pm
    Author:  julien@macmini

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class SplashStar    : public Component
{
public:
    SplashStar();
    ~SplashStar();

    void paint (Graphics&) override;
    void resized() override;

private:
    int whatever;
    
    std::unique_ptr<Drawable> star;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SplashStar)
};
