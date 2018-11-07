/*
  ==============================================================================

    WallComponent.cpp
    Created: 31 Oct 2018 3:58:12pm
    Author:  김소영

  ==============================================================================
*/

#include "CastleComponent.h"
#include "../JuceLibraryCode/JuceHeader.h"

CastleComponent::CastleComponent() {}
CastleComponent::~CastleComponent() {}

void CastleComponent::paint(Graphics& g) {
	g.setColour(Colours::grey);	//성칠하기
	g.fillRect(getWidth() / 10, getHeight() / 2.5, getWidth()*0.8, getHeight()*0.4);

	g.fillRect(getWidth() / 3, getHeight() / 4, getWidth() / 3, getHeight()*0.5);

	g.setColour(Colours::bisque);	//바닥
	g.fillRect(getWidth() / 12, getHeight() * 0.7, getWidth() * 0.84, getHeight()*0.1);
	g.fillRect(getWidth() / 12, getHeight() * 0.4, getWidth() * 0.84, getHeight()*0.05);
	g.fillRect(getWidth() *0.32, getHeight() /5, getWidth() * 0.36, getHeight()*0.05);

}
void CastleComponent::resized() {}