
# zcdMuteAlgo

This file contains an algorithm for a (mono) implementation of a zero-crossing-detecting mute. This functions like a normal mute, but rather than immediately stopping sound when told to (which can lead to clicking artifacts), it will wait until the next zero-crossing to avoid such clicks.
To start, you will need a zcdMuteInfo for each channel. This stores information needed for the zero-crossing detection.
Then for each sample, you can call AudioProcessorAlgos::ZCDMute::zcdMuteProcess(), which will process (i.e. mute or not mute) the sound. Note that the samples need to be processed *in chronological order* for zero-crossing detection to work.

## Classes/structs

``AudioProcessorAlgos::zcdMuteInfo`` - struct holding info on whether the signal is currently muted (zcdMuteInfo.isMuted) and whether the last sample was above or below 0 (zcdMuteInfo.lastWasPositive).

``AudioProcessorAlgos::ZCDMute`` - only contains the zcdMuteProcess functions.

## Functions

``Steinberg::tresult AudioProcessorAlgos::ZCDMute::zcdMuteProcess(zcdMuteInfo\* muteInfo, bool mute, Steinberg::Vst::Sample32\* data)`` - processes the Sample32 data points to using the zcdMuteInfo provided. If mute goes from false to true, zcdMuteProcess will set \*data to 0 from the next zero-crossing onwards - if it goes from true to false, it will not affect \*data until the next zero-crossing. Returns kResultTrue when switching from muting to not muting, returns kResultOk otherwise.
