/*
  ==============================================================================

    LoginComponent.h
    Created: 7 Nov 2018 4:39:51pm
    Author:  김소영

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class LoginComponent : public Component
{
public:
	LoginComponent();
	~LoginComponent();

	Label inputLabel;
	Label passLabel;
	TextButton tb;

	void paint(Graphics&) override;
	void resized() override;

private:
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(LoginComponent)
};