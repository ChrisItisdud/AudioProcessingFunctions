#pragma once

#include "public.sdk/source/vst/vstaudioeffect.h"

namespace AudioProcessorAlgos {

struct zcdMuteInfo {
	//<value>stores whether the signal is currently being muted</value>
	bool isMuted = false;
	//<value>stores whether the signal is currently above or below 0</value>
	bool lastWasPositive = false;
};

class ZCDMute {
public:
	ZCDMute();
	~ZCDMute();
	/*
	<returns>Returns kResultTrue on mute/unmute, kResultOk otherwise</returns>
	<summary>mutes provided sample with zero-crossing detection</summary>
	<param name='muteInfo'>muteinfo struct used to store values</param>
	<param name='mute'>user param for muting</param>
	<param name='data'>input data to process</param>
	*/
	static Steinberg::tresult zcdMuteProcess(zcdMuteInfo* muteInfo, bool mute, Steinberg::Vst::Sample32* data);
	/*
	<returns>Returns kResultTrue on mute/unmute, kResultOk otherwise</returns>
	<summary>mutes provided sample with zero-crossing detection</summary>
	<param name='muteInfo'>muteinfo struct used to store values</param>
	<param name='mute'>user param for muting</param>
	<param name='data'>input data to process</param>
	*/
	static Steinberg::tresult zcdMuteProcess(zcdMuteInfo* muteInfo, bool mute, Steinberg::Vst::Sample64* data);
};
}
