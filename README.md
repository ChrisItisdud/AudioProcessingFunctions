# AudioProcessorAlgos

This repository contains several utility algorithms for audio processing, meant to be used with the [VST3 SDK by  Steinberg](https://github.com/steinbergmedia/vst3sdk). You might need to change them up a little to use them with JUCE or other frameworks.

- zcdMuteAlgo

zcdMuteAlgo contains a zero-crossing-detecting mute algorithm. By waiting with muting signals until the next zero-crossing, clicking artifacts are avoided. Detailed documentation can be found in zcdMuteAlgo.md.
