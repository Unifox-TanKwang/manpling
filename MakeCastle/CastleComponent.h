/*
  ==============================================================================

    WallComponent.h
    Created: 31 Oct 2018 3:58:12pm
    Author:  김소영

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class CastleComponent : public Component
{
public:
	CastleComponent();
	~CastleComponent();

	void paint(Graphics&) override;
	void resized() override;
	
private:
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CastleComponent)
};