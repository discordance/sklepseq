// myMidiMessage.h: interface for the myMidiMessage class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYMIDIMESSAGE_H__34252E74_5689_4D69_9892_8CCF3ACE31E4__INCLUDED_)
#define AFX_MYMIDIMESSAGE_H__34252E74_5689_4D69_9892_8CCF3ACE31E4__INCLUDED_

#include <juce.h>

class myMidiMessage
{
	public:
		myMidiMessage(int ch);
		~myMidiMessage();

		void setMidiChannel (int ch);
		void setMidiMessage (MidiMessage midiMessage);
		void setMidiMessageMulti (MidiBuffer midiBuffer);
		bool isMulti();
		MidiMessage *getMidiMessage();

		MidiMessage *m;
		MidiBuffer *mB;
		bool enabled;

	private:
		int id;
		int midiChannel;
		bool multi;
};

#endif // !defined(AFX_MYMIDIMESSAGE_H__34252E74_5689_4D69_9892_8CCF3ACE31E4__INCLUDED_)
