# interupts

## Overview

Trafficlight with Interrups, just runs through colors.
 
When there is no interupt the programm will turn Port3 on.

On an interrupt the Programm runs through the colors:
Turn Port 3 off;
Turn Port 4 on;
Wait 1 second;
Turn Port 3 off;
Turn Port 4 on;
Wait;
Turn Port 3 off;
Turn Port 4 on;

An interrupt is called when there is no input on Port2.
As long as there is a low on Port2 the programm will run through the colors.
If Port2 is high the programm will stay on red.