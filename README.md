**Team:** Clockwork Radishes <br />
**Group Member Names:** Engineering Students at Portland Community College <br />
**Course and Quarter:** Engineering 114 Winter 2018 <br />
**Date:** March 21, 2018   <br />
**Revision:** Version 1.1   <br />

# Problem Statement
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;For the final project in ENGR 101 Fall 2017, students were challenged to create a vehicle that can travel the furthest distance while staying within the course (approximately 3 feet wide). It was a fairly new final project idea so the only way for the students to compete with each other was to see whose vehicle could go the furthest. The engineering department wanted to open up other ways for students compete that was measurable so our team, Clockwork Radishes, developed a way to measure each vehicle’s time and speed through a distance of 3 feet. We knew that if we could execute this on a smaller scale (3 feet distance) then it should work on a larger scale by expanding the distance and width of the stand.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;We want to execute this by building a stand that holds two photogates and two laser pointers 3 feet apart. It will measure the time it took the vehicle to go through the two lasers and calculate the speed for the three trials allowed by the project. The time and speed for each trial will display in a table on the MATLAB screen. 

# Hardware Setup
### Bill of Materials
|Part Name       |Item Name                   |Link|Purpose                     |Price (USD)|
|----------------|----------------------------|----|----------------------------|----------:|
|Arduino         |Sparkfun RedBoard           |[Link](https://www.sparkfun.com/products/13975)|Hardware                    |19.95      |
|Sensor Shield   |Sparkfun Vernier Interface  |[Link](https://www.sparkfun.com/products/12858)    |pH sensor/Arduino interface |24.95      |
|Bread board     |Breadboard - Self-adhesive  |[Link](https://www.sparkfun.com/products/12002)    |Electronic circuit builder  |4.95       |
|Bread board base|Arduino & Breadboard holder |[Link](https://www.sparkfun.com/products/11235)    |Holds breadboard & Arduino  |3.95       |
|Photogate Sensor|Vernier Photogate |[Link](https://www.vernier.com/products/sensors/vpg-btd/)    |Sensor port for laser  |2x45.00       |
|Laser Pointer|5mW 532nm Grn Laser Pointer |[Link](https://www.bestlaserpointers.com/5mw-532nm-green-laser-pointer-pen-shape-black.html?gclid=EAIaIQobChMI6--p5_Ln2QIVhyu9Ch34VA71EAkYAiABEgLOGfD_BwE)    |Emits a narrow laser beam  |2x5.50       |
|Laser Pointer Stand  |Arbor Scientific Laser Tripod       |[Link](https://www.arborsci.com/laser-tripod.html)    |Holds the laser pointers in place|2x17.00       |
|Mini-USB Cable  |Mini-USB cable - 6ft.       |[Link](https://www.sparkfun.com/products/11301)    |Connects Arduino to computer|3.95       |
|Photogate stand  |Homemade photogate stand       |[Image](https://raw.githubusercontent.com/ClockworkRadishes/Car_timing_speed_project/master/Images/photogatestand.jpg)    |Holds the lasers and photogate|0.00       |
|                |                            |    |**Total**                       |**192.75**     |

### Hardware Schematic
![](/Images/schematic.png)

## Hookup Guide
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The materials above are all connected to obtain the speed and the time of an ENGR101 car within 3 feet. The photogate stand will hold the photogate and corresponding laser pair 3 feet apart from the other pair. Those photogates will be connected to the sensor shield which is embedded on top of the Arduino and a mini-USB cable will connect the Arduino to the laptop.  A more detailed hookup guide as follows

### Step 1
Align the sensor shield’s pin with corresponding holes in the Arduino. Press them together firmly until the pins no longer show. <br />
![](/Images/arduinoandshield.png)


### Step 2
Connect the photogates into Digital 1 and Digital 2 ports of the sensor shield. <br />
![](/Images/digitalports.png)


### Step 3
Setup one photogate on one end of the photogate stand and the other photogate on the other end making sure it is secure in the slot provided for both. <br />
![](/Images/photogate.png)


### Step 4
On the other side of the photogate stand from the photogates, wrap the Velcro from the laser pointer stands around the end of the base so it aligns with the photogates. <br />
![](/Images/laserstand.png)


### Step 5
Put the laser pointers in their holders on each stand and align them so the beam goes into the laser port of each photogate. <br />
![](/Images/alignlaser.png)


### Step 6
Set the photogate stand, with the photogates and lasers attached, at the end of the car ramp. <br />
![](/Images/nexttoramp.png)


### Step 7
Use the mini-USB cable to connect the Arduino into the laptop then run the programs. <br />
![](/Images/usb.png)


# About The Implemented Code
### Arduino Code
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
file:///C:/Users/Layal/Desktop/photogate/photogate.ino
    
### MATLAB Code
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
file:///C:/Users/Layal/Desktop/html/photo_sensor.html 


### Results
Arduino Serial Monitor
(1 reads blocked photogate)
(0 reads unblocked photogate)
![](/Images/arduino_serial_reading.PNG) 


Results from MATLAB after reading Arduino's serial monitor

Trail 1

![](/Images/graph_1.PNG) ![](/Images/output_1.PNG)

Trial 2

![](/Images/graph_2.PNG) ![](/Images/output_2.PNG)

Trail 3

![](/Images/graph_3.PNG) ![](/Images/output_3.PNG)


# Future Work
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; This was a project that has not been done in ENGR 114 so there are definitely a few things we could improve on. A couple things we would suggest to those who wants to continue on this project is the MATLAB code to start detecting the photogates. When the user presses start(Enter) the program should be ready to start saving the data. We have it so the time phase is manually inputted by the user but instead, there should just simply be a start button to begin the program and know when to stop when the each vehicle has had three trials. Another issue we had with the project is the width of the stand. We anticipated the cars to be able to go straight enough through a 3 feet distance and 2 feet wide opening but it was not always the case. This caused issues with storing accurate data and also it knocked the lasers out of place. We mentioned that this was meant to be on a smaller scale to test that this project could work with a larger frame on the stand so for the future, there  just needs to be a way to make it a wider course. 
 

## License

[GNU Public 3.0](LICENSE)
