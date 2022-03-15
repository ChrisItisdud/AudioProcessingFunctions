#include "zcdMuteAlgo.h"

namespace AudioProcessorAlgos {
	bool isZeroCross(zcdMuteInfo* muteInfo, Steinberg::Vst::Sample32* data) {
		return (muteInfo->lastWasPositive && (*data <= 0)) || (!muteInfo->lastWasPositive && (*data >= 0));
	}

	bool isZeroCross(zcdMuteInfo* muteInfo, Steinberg::Vst::Sample64* data) {
		return (muteInfo->lastWasPositive && (*data <= 0)) || (!muteInfo->lastWasPositive && (*data >= 0));
	}

	Steinberg::tresult ZCDMute::zcdMuteProcess(zcdMuteInfo* muteInfo, bool mute, Steinberg::Vst::Sample32* data) {
		if (muteInfo->isMuted == mute) {
			muteInfo->lastWasPositive = (*data >= 0);
		}
		else if (mute) {
			if (isZeroCross(muteInfo, data)){
				*data = 0;
				muteInfo->isMuted = true;
				return Steinberg::kResultTrue;
			}
		}
		else {
			if (isZeroCross(muteInfo, data)){
				muteInfo->isMuted = false;
				return Steinberg::kResultTrue;
			}
			else {
				*data = 0;
			}
		}
		return Steinberg::kResultOk;
	}

	Steinberg::tresult ZCDMute::zcdMuteProcess(zcdMuteInfo* muteInfo, bool mute, Steinberg::Vst::Sample64* data) {
		if (muteInfo->isMuted == mute) {
			muteInfo->lastWasPositive = (*data >= 0);
		}
		else if (mute) {
			if (isZeroCross(muteInfo, data)){
				*data = 0;
				muteInfo->isMuted = true;
				return Steinberg::kResultTrue;
			}
		}
		else {
			if (isZeroCross(muteInfo, data)){
				muteInfo->isMuted = false;
				return Steinberg::kResultTrue;
			}
			else {
				*data = 0;
			}
		}
		return Steinberg::kResultOk;
	}
}