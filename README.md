# Non-Robot-2019

## Things to be done for *LED Light Strip: 

1) Functionality for Autonomous: I think Owen has that covered. I would move this into a method so that it can be called anywhere. Currently the lights are blue. Do we want to change to different color? I would leave it as is for now. 

2) Functionality for Manual Control: Count down the LED's from both sides. Currently, the timer just counts down every 2 seconds or so from 60. It would be better I think to count down from both sides and meet in the middle, makes it easier to see and would be able to gauge better as to where we are in the match. 

3) The last 5 seconds: Owen has some code that is able to count down every 2 seconds, which is good. We should think about making this flash, if possible. Currently, I like how it looks. Wondering if flashing would make a huge difference?

___________________________________________________________________________________________________________________________________________

## Low Priority: 
1) We need to combine driver_timer 2.1 ad sketch_jan23b.ino into one file and keep track of one file the entire time. Right now, driver_time 2.1 is just a text file. Would be ideal to make this a ino file or copy the content in this file to sketch_jan23b.ino. 
