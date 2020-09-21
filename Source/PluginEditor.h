/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Project10PrereqAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Project10PrereqAudioProcessorEditor (Project10PrereqAudioProcessor&);
    ~Project10PrereqAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Project10PrereqAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Project10PrereqAudioProcessorEditor)
};
