**Team:** Clockwork Radishes <br />
**Group Member Names:** Teng Xiong, Layal Abdeljawad, Kaylie Thomas <br />
**Course and Quarter:** Engineering 114 Winter 2018 <br />
**Date:** March 20, 2018   <br />
**Revision:** Version 1.0   <br />

# Problem Statement
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;For the final project in ENGR101 Fall 2017, students were challenged to create a vehicle that can travel the furthest distance while staying within the course (approximately 2 feet wide). It was a fairly new final project idea so the only way for the students to compete with each other was to see whose vehicle could go the furthest. The engineering department wanted to open up other ways for student compete that was measurable so our team, Clockwork Radishes, developed a way to measure each vehicle’s time and speed through a distance of 3 feet.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The way we plan to execute this is by building a stand that holds two photogates and two laser pointers 3 feet apart. Once the car leaves the ramp, it will interrupt the first laser beam, which will start a timer in MATLAB, and stop the timer as soon as the car goes across the second beam. MATLAB will then store the time through those two lasers (3 feet) and calculate the speed for the three trials allowed by the project. The time and speed for each trial will display in a table on the MATLAB screen. 

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

 ## Hookup Guide
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The materials above are all connected to obtain the speed and the time of an ENGR101 car within 3 feet. The photogate stand will hold the photogate and corresponding laser pair 3 feet apart from the other pair. Those photogates will be connected to the sensor shield which is embedded on top of the Arduino and a mini-USB cable will connect the Arduino to the laptop.  A more detailed hookup guide as follows

### Step 1
Align the sensor shield’s pin with corresponding holes in the Arduino. Press them together firmly until the pins no longer show.
# ![](/Images/arduinoandshield.png)


### Step 2
Connect the photogates into Digital 1 and Digital 2 ports of the sensor shield.  
# ![](/Images/digitalports.png)


### Step 3
Setup one photogate on one end of the photogate stand and the other photogate on the other end making sure it is secure in the slot provided for both.
# ![](/Images/photogate.png)


### Step 4
On the other side of the photogate stand from the photogates, wrap the Velcro from the laser pointer stands around the end of the base so it aligns with the photogates.
# ![](/Images/laserstand.png)


### Step 5
Put the laser pointers in their holders on each stand and align them so the beam goes into the laser port of each photogate.
# ![](/Images/alignlaser.png)


### Step 6
Set the photogate stand, with the photogates and lasers attached, at the end of the car ramp.
# ![](/Images/)


### Step 7
Use the mini-USB cable to connect the Arduino into the laptop then run the programs.
# ![](/Images/usb.png)


# About The Implemented Code
### Arduino Code
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
### MATLAB Code
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;


# Results
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;


# Future Work
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;


## License

[GNU Public 3.0](LICENSE)
