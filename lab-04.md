# Paper Puppets

_A lab report by John Q. Student_

## In this Report

To submit your lab, clone [this repository](https://github.com/FAR-Lab/IDD-Fa18-Lab4). You'll need to describe your design, include a video of your paper display in operation, and upload any code you wrote to make it move.

## Part A. Actuating DC motors

**Video:** [**https://www.youtube.com/watch?v=\_vpZyFdfBZs**](https://www.youtube.com/watch?v=_vpZyFdfBZs)\*\*\*\*

## Part B. Actuating Servo motors

### Part 1. Connect the Servo to your breadboard

**a. Which color wires correspond to power, ground and signal?**

Red - Power

Brown - Ground

Orange - Signal

### Part 2. Connect the Servo to your Arduino

**a. Which Arduino pin should the signal line of the servo be attached to?**

Pin 9

**b. What aspects of the Servo code control angle or speed?**

```text
  for (pos = 180; pos >= 0; pos -= 1) { // Angle
    myservo.write(pos);              // 
    delay(15);                       // Speed
  }
```

## Part C. Integrating input and output

**Include a photo/movie of your raw circuit in action.**

## Part D. Paper puppet

**a. Make a video of your proto puppet.**

\*\*\*\*[**https://www.youtube.com/watch?v=LQ4L\_Ktovmg**](https://www.youtube.com/watch?v=LQ4L_Ktovmg)\*\*\*\*

## Part E. Make it your own

**a. Make a video of your final design.**

