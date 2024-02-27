declare filename "faustdistorsion.dsp";
declare name "faustdistorsion";
declare filename "faust.dsp";
declare name "faustdisto";
// compile: faust2sndfile delay.dsp
// run: ./delay ../voice.wav voice_with_fx.wav

import("stdfaust.lib");

process = ef.cubicnl(0.5,0)  <: _,_;