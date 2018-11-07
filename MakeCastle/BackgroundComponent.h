/*
  ==============================================================================

    BackgroundComponent.h
    Created: 31 Oct 2018 4:01:53pm
    Author:  김소영

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class BackgroundComponent : public Component {
public:
	BackgroundComponent();
	~BackgroundComponent();

	void paint(Graphics&) override;
	void resized() override;

private:
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(BackgroundComponent)
		bool chk = false;
};