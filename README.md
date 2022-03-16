# AudioProcessingFunctions

This repository contains several utility algorithms for audio processing, meant to be used with the [VST3 SDK by  Steinberg](https://github.com/steinbergmedia/vst3sdk). You might need to change them up a little to use them with JUCE or other frameworks.
All algorithms have versions for both 32 bit and 64 bit samples, using either native float and double types or the Steinberg::Vst::Sample32 and Steinberg::Vst::Sample64 types.

- zcdMuteAlgo

zcdMuteAlgo contains a zero-crossing-detecting mute algorithm. By waiting with muting signals until the next zero-crossing, clicking artifacts are avoided. Detailed documentation can be found in zcdMuteAlgo.md.

- simpleUtilities

simpleUtilities will contain very simple utilities useful for basically every plug-in. Currently contains conversion from mid/side to left/right and vice versa as well as a slew limiter. Detailed documentation can be found in simpleUtilities.md.
