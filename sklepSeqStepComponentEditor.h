/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  18 Jun 2008 9:23:13 pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.11

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_SKLEPSEQSTEPCOMPONENTEDITOR_SKLEPSEQSTEPCOMPONENTEDITOR_C03C055D__
#define __JUCER_HEADER_SKLEPSEQSTEPCOMPONENTEDITOR_SKLEPSEQSTEPCOMPONENTEDITOR_C03C055D__

//[Headers]     -- You can add your own extra header files here --
#include "juce.h"
#include "sklepSeqStep.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class sklepSeqStepComponentEditor  : public Component
{
public:
    //==============================================================================
    sklepSeqStepComponentEditor (sklepSeqStep *parent);
    ~sklepSeqStepComponentEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();


    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    MidiKeyboardComponent* keyboardCmp;

    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    sklepSeqStepComponentEditor (const sklepSeqStepComponentEditor&);
    const sklepSeqStepComponentEditor& operator= (const sklepSeqStepComponentEditor&);
};


#endif   // __JUCER_HEADER_SKLEPSEQSTEPCOMPONENTEDITOR_SKLEPSEQSTEPCOMPONENTEDITOR_C03C055D__