#pragma once

#include "public.sdk/source/vst/vstaudioeffect.h"

namespace AudioProcessorAlgos {

struct zcdMuteInfo {
	bool isMuted = false;
	bool lastWasPositive = false;
};

class ZCDMute {
public:
	ZCDMute();
	~ZCDMute();
	static Steinberg::tresult zcdMuteProcess(zcdMuteInfo* muteInfo, bool mute, Steinberg::Vst::Sample32* data);
	static Steinberg::tresult zcdMuteProcess(zcdMuteInfo* muteInfo, bool mute, Steinberg::Vst::Sample64* data);
};
}
