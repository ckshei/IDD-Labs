# Data Logger \(and using cool sensors!\)

_A lab report by John Q. Student._

## In The Report

Include your responses to the bold questions on your own fork of [this lab report template](https://github.com/FAR-Lab/IDD-Fa18-Lab2). Include snippets of code that explain what you did. Deliverables are due next Tuesday. Post your lab reports as README.md pages on your GitHub, and post a link to that on your main class hub page.

For this lab, we will be experimenting with a variety of sensors, sending the data to the Arduino serial monitor, writing data to the EEPROM of the Arduino, and then playing the data back.

## Part A.  Writing to the Serial Monitor

**a. Based on the readings from the serial monitor, what is the range of the analog values being read?**

0-1023

**b. How many bits of resolution does the analog to digital converter \(ADC\) on the Arduino have?**

10

## Part B. RGB LED

**How might you use this with only the parts in your kit? Show us your solution.**

\*\*\*\*[**https://www.youtube.com/watch?v=Y-iwOcFzKBo**](https://www.youtube.com/watch?v=Y-iwOcFzKBo)\*\*\*\*

## Part C. Voltage Varying Sensors

### 1. FSR, Flex Sensor, Photo cell, Softpot

**a. What voltage values do you see from your force sensor?**

0 - 1023 bits so about 0-5V.

**b. What kind of relationship does the voltage have as a function of the force applied? \(e.g., linear?\)**

It does seem logarithmic

**c. Can you change the LED fading code values so that you get the full range of output voltages from the LED when using your FSR?**

Yes, you need to set up the input pin as pin A0, and then calculate the brightness. You could also map the voltages to the output voltages from the LED \(e.g. 1-1023 to 0-255\), or specifically find the voltage where the LED does light up \(around 60 or some, and thus map from 60-255\). 

**d. What resistance do you need to have in series to get a reasonable range of voltages from each sensor?**

Soft Pot - 20k

flex sensor + photo cell - 10k 

**e. What kind of relationship does the resistance have as a function of stimulus? \(e.g., linear?\)**

soft pot + flex sensor - linear

photocell + force sensor - log 

### 2. Accelerometer

**a. Include your accelerometer read-out code in your write-up.**

**Code:** [**https://github.com/ckshei/IDD-Labs/blob/master/lab-3/LED.ino**](https://github.com/ckshei/IDD-Labs/blob/master/lab-3/LED.ino)\*\*\*\*

\*\*\*\*[**https://youtu.be/i9dvpL1\_z9Q**](https://youtu.be/i9dvpL1_z9Q)\*\*\*\*

## Optional. Graphic Display

**Take a picture of your screen working insert it here!**

![](.gitbook/assets/image%20%283%29.png)

![](.gitbook/assets/image%20%284%29.png)

Code: [https://github.com/ckshei/IDD-Labs/blob/master/lab-3/LED\_DIsplay.ino](https://github.com/ckshei/IDD-Labs/blob/master/lab-3/LED_DIsplay.ino)

## Part D. Logging values to the EEPROM and reading them back

### 1. Reading and writing values to the Arduino EEPROM

**a. Does it matter what actions are assigned to which state? Why?**

Yes, the way we have it coded, there is no way to go from state 0 to state 2, and vice versa. 

![](.gitbook/assets/image%20%2810%29.png)

So it wouldn't make much sense if we were to make read and write on opposite ends \(i.e. State 1, and State 3\) because the middle state would be clear and we would always be clearing any data we wrote and would not be able to read it.

**b. Why is the code here all in the setup\(\) functions and not in the loop\(\) functions?**

We want our code to run per state change \(i.e. when the potentiometer turns\) rather than constantly in the background. I suspect it could even cause issues if we kept running the read, write, and clear code so often. 

**c. How many byte-sized data samples can you store on the Atmega328?**

1024 \(EEPROM Size\)

Atmega328 has 1024 bytes. 

**d. How would you get analog data from the Arduino analog pins to be byte-sized? How about analog data from the I2C devices?**

You could map the analog data to 0-255, or you could create some sort of data structure that splits up the data into different memory addresses, and reads it back. 

**e. Alternately, how would we store the data if it were bigger than a byte? \(hint: take a look at the** [**EEPROMPut**](https://www.arduino.cc/en/Reference/EEPROMPut) **example\)**

**Upload your modified code that takes in analog values from your sensors and prints them back out to the Arduino Serial Monitor.**

{% embed url="https://youtu.be/ubDzC9D-o1s" %}

\*\*\*\*[**https://github.com/ckshei/IDD-Labs/tree/master/lab-3/SwitchState2**](https://github.com/ckshei/IDD-Labs/tree/master/lab-3/SwitchState2)\*\*\*\*

### 2. Design your logger

**a. Insert here a copy of your final state diagram.**

### 3. Create your data logger!

**a. Record and upload a short demo video of your logger in action.**

