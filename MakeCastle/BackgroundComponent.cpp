/*
  ==============================================================================

    BackgroundComponent.cpp
    Created: 31 Oct 2018 4:01:53pm
    Author:  김소영

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "BackgroundComponent.h"
#include <iostream>

BackgroundComponent::BackgroundComponent() {}
BackgroundComponent::~BackgroundComponent() {}

void BackgroundComponent::paint(Graphics& g) {
	g.setColour(Colours::lightgreen);	//바닥칠하기
	g.fillRect(0, getHeight() *0.6, getWidth(), getHeight() *0.6);

	g.setColour(Colours::red);			//레드카펫
	Path tri1; tri1.addTriangle(getWidth()*0.2, getHeight(), getWidth()*0.8, getHeight(), getWidth() / 2, getHeight()*0.45);
	g.fillPath(tri1);

	g.setColour(Colours::skyblue);		//하늘 칠하기
	g.fillRect(0, 0, getWidth(), getHeight() - 100);
	chk = true;
}
void BackgroundComponent::resized() {}