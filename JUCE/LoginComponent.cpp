/*
  ==============================================================================

    LoginComponent.cpp
    Created: 7 Nov 2018 4:39:51pm
    Author:  김소영

  ==============================================================================
*/

#include "LoginComponent.h"
#include "../JuceLibraryCode/JuceHeader.h"

LoginComponent::LoginComponent() {
	
	addAndMakeVisible(tb);
	tb.setButtonText("push");
	tb.setColour(TextButton::buttonColourId, Colours::lightcoral);
	tb.setColour(TextButton::buttonOnColourId, Colours::lightcyan);
	tb.setState(Button::buttonDown);
	tb.setBounds(110, 163, 80, 20);

	addAndMakeVisible(inputLabel);
	inputLabel.setFont(Font(16.0f, Font::bold));
	inputLabel.setText("ID", dontSendNotification);
	inputLabel.setColour(Label::textColourId, Colours::black);
	inputLabel.setColour(Label::backgroundColourId, Colours::lavender);
	inputLabel.setColour(Label::textWhenEditingColourId, Colours::blueviolet);
	inputLabel.setJustificationType(Justification::centred);
	inputLabel.setEditable(true);
	inputLabel.setBounds(50, 100, 200, 30);

	addAndMakeVisible(passLabel);
	passLabel.setFont(Font(16.0f, Font::bold));
	passLabel.setText("PassWord", dontSendNotification);
	passLabel.setColour(Label::textColourId, Colours::black);
	passLabel.setColour(Label::backgroundColourId, Colours::lavender);
	passLabel.setColour(Label::textWhenEditingColourId, Colours::blueviolet);
	passLabel.setJustificationType(Justification::centred);
	passLabel.setEditable(true);
	passLabel.setBounds(50, 130, 200, 30);
}
LoginComponent::~LoginComponent() {}

void LoginComponent::paint(Graphics& g) {
	
}
void LoginComponent::resized() {}