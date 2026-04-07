# MaRS_task1

#SectionA_Q1_Blinking LED with different time interval
https://www.tinkercad.com/things/3qCmeHbdmxF/editel?returnTo=%2Fdashboard&sharecode=VBI5ZeVE82uCLmagzbHF6-ReuJHwHyQVdq80-sVdGQY&sharecode=VBI5ZeVE82uCLmagzbHF6-ReuJHwHyQVdq80-sVdGQY

This program controls three LEDs to blink at different time intervals using the millis() function. Instead of using delays, it tracks elapsed time to allow all LEDs to blink simultaneously without blocking each other. 
Each LED has its own timing condition, ensuring independent operation. 

#SectionA_Q2_Controlling colour of RGB LED and blinking speed of another LED with potentiometer
https://www.tinkercad.com/things/cFUACVuef3O/editel?returnTo=%2Fdashboard&sharecode=eQO4wGVY7o2YswH7Us-lh6Vho2kYr8MMOuh0Rmtn8hc&sharecode=eQO4wGVY7o2YswH7Us-lh6Vho2kYr8MMOuh0Rmtn8hc

This program uses a potentiometer to control the colour of an RGB LED and the blinking speed of another LED. 
The analog value from the potentiometer is read using analogRead() and mapped to PWM values using analogWrite() to adjust LED brightness and color. The same input also controls blinking speed dynamically. 
This demonstrates analog input processing and PWM control.

#SectionA_Q3_Build a reaction time tester
https://www.tinkercad.com/things/0bENI0ed4IU/editel?returnTo=%2Fdashboard&sharecode=00Ja4dll3w2rBBl1j-NvkrvAemSCMyk520vZiMP2Yco&sharecode=00Ja4dll3w2rBBl1j-NvkrvAemSCMyk520vZiMP2Yco

This program measures the user’s reaction time using an LED and a pushbutton. The LED turns on after a random delay, and the user must press the button as quickly as possible.
The reaction time is calculated using the difference between two timestamps obtained from the millis() function (reaction time = current time − start time). The pushbutton uses INPUT_PULLUP, where the input reads HIGH when not pressed and LOW when pressed.

#SectionB_MiniProject_Q1_Smart Distance Alert System
https://www.tinkercad.com/things/86gYDtmQTJC/editel?returnTo=%2Fdashboard&sharecode=gtObCKreKPzxGG9TntV43tCMvH7C4wP9AEG7zEosETg&sharecode=gtObCKreKPzxGG9TntV43tCMvH7C4wP9AEG7zEosETg

What the project does and why I chose it:
This project measures the distance of nearby objects using an ultrasonic sensor and alerts the user using an LED when an object is too close.
I chose this project because it is one of the common issues in real-life sensing and is useful for obstacle detection in robotics and other cases. 

Components used and their roles:
Arduino Uno- Controls the system and processes data.
Ultrasonic sensor- It measures distance by sending and receiving sound waves. 
LED (with resistor)- It acts as an alert indicator and the resistor protects the LED from excess current.

Challenges faced and how I solved them:
At first, the incorrect distance readings occurred due to wiring issues, which were fixed by proper connections. 
There was slight delay in response, reduced by optimizing code timing. Stable sensor placement improved accuracy.
I initially forgot to change the resistor measurement to 220 ohm which in real circuits would be dangerous.
