//DELAY


import("stdfaust.lib");

maxDelayTime = 1.0;
delayTime    = 1;
feedback     = 0.3;

process = ef.echo(maxDelayTime, delayTime, feedback) <: _,_;
