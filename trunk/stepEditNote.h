/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  2 Jul 2008 2:39:26 pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.11

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_STEPEDITNOTE_STEPEDITNOTE_9C26E7A5__
#define __JUCER_HEADER_STEPEDITNOTE_STEPEDITNOTE_9C26E7A5__

//[Headers]     -- You can add your own extra header files here --
#include "juce.h"
#include "myMidiMessage.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class stepEditNote  : public Component,
                      public MidiKeyboardStateListener,
                      public SliderListener
{
public:
    //==============================================================================
    stepEditNote (myMidiMessage *msg);
    ~stepEditNote();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void handleNoteOn (MidiKeyboardState *source, int midiChannel, int midiNoteNumber, float velocity);
	void handleNoteOff (MidiKeyboardState *source, int midiChannel, int midiNoteNumber);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);


    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	MidiKeyboardState midiKeyboardState;
	myMidiMessage *midiMessage;
    //[/UserVariables]

    //==============================================================================
    MidiKeyboardComponent* midiKeyboard;
    Slider* veloSlider;

    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    stepEditNote (const stepEditNote&);
    const stepEditNote& operator= (const stepEditNote&);
};


#endif   // __JUCER_HEADER_STEPEDITNOTE_STEPEDITNOTE_9C26E7A5__
