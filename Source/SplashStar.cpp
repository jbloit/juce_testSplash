/*
  ==============================================================================

    SplashStar.cpp
    Created: 13 Feb 2020 2:21:59pm
    Author:  julien@macmini

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "SplashStar.h"

//==============================================================================
SplashStar::SplashStar()
{

    star = Drawable::createFromImageData(BinaryData::splashStar_png, BinaryData::splashStar_pngSize);
    addAndMakeVisible(star.get());
}

SplashStar::~SplashStar()
{
    star = nullptr;
}

void SplashStar::paint (Graphics& g)
{

    g.fillAll (Colours::blanchedalmond);
}

void SplashStar::resized()
{

    star->setTransformToFit(getLocalBounds().reduced(50, 50).toFloat(), RectanglePlacement::centred);

}
