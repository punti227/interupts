# interupts

## overview
 
When there is no interupt the programm will turn PB3 (red light) on
On an interrupt the Programm runs through the colors:
turn PB3 (red light) off
turn PB4 (yellow light) on
wait
turn PB3 (yellow light) off
turn PB4 (green light) on
wait
turn PB3 (green light) off
turn PB4 (red light) on

interrupt is called when there is no input on PB2
as long as there is a low on PB2 the programm will run through the colors