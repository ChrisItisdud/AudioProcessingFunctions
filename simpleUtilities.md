# simpleUtilities

This file contains simple utilities for plug-ins.

## Classes/structs

``AudioProcessorAlgos::SimpleUtilities`` - only contains the static utility functions.

## Functions

``void AudioProcessorAlgos::SimpleUtilities::LRtoMS(float l, float r, float *m, float *s)`` - converts the l/r params to mid/side channels and stores the result in m and s.

``void AudioProcessorAlgos::SimpleUtilities::LRtoMS(double l, double r, double *m, double *s)`` - converts the l/r params to mid/side channels and stores the result in m and s.

``void AudioProcessorAlgos::SimpleUtilities::MStoLR(float m, float s, float *l, float *r)`` - converts the mid/side params to l/r channels and stores the result in l and r.

``void AudioProcessorAlgos::SimpleUtilities::MStoLR(double m, double s, double *l, double *r)`` - converts the mid/side params to l/r channels and stores the result in l and r.

``T AudioProcessorAlgos::SimpleUtilities::slew(T target, T *value, T threshold)`` - will gradually move value towards target in steps the size of threshold when called repeatedly. Only works if the type T overloads the <, \*, <=, + and - operators, and only makes sense if the type T is numeric (usually float).
