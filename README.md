**Group Member Names:** Teng Xiong, Layal Abdeljawad, Kaylie Thomas
**Course and Quarter:** Engineering 114 Winter 2018
**Date:** March 20, 2018  
**Revision:** Version 1.0  

# Problem Statement
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; For the final project in ENGR101 Fall 2017, students were challenged to create a vehicle that can travel the furthest distance while staying within the course (approximately 2 feet wide). It was a fairly new final project idea so the only way for the students to compete with each other was to see whose vehicle could go the furthest. The engineering department wanted to open up other ways for student compete that was measurable so our team, Clockwork Radishes, developed a way to measure each vehicle’s time and speed through a distance of 3 feet.
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 

# Hardware Setup
### Bill of Materials
|Part Name       |Item Name                   |Link|Purpose                     |Price (USD)|
|----------------|----------------------------|----|----------------------------|----------:|
|Arduino         |Sparkfun RedBoard           |[Link](https://www.sparkfun.com/products/13975)|Hardware                    |19.95      |
|pH Sensor       |Vernier pH Sensor PH-BTA    |[Link](https://www.sparkfun.com/products/12872)    |Measure pH                  |78.95      |
|Sensor Shield   |Sparkfun Vernier Interface  |[Link](https://www.sparkfun.com/products/12858)    |pH sensor/Arduino interface |24.95      |
|Bread board     |Breadboard - Self-adhesive  |[Link](https://www.sparkfun.com/products/12002)    |Electronic circuit builder  |4.95       |
|Bread board base|Arduino & Breadboard holder |[Link](https://www.sparkfun.com/products/11235)    |Holds breadboard & Arduino  |3.95       |
|Mini-USB Cable  |Mini-USB cable - 6ft.       |[Link](https://www.sparkfun.com/products/11301)    |Connects Arduino to computer|3.95       |
|                |                            |    |**Total**                       |**136.70**     |

## Hardware Schematic
![Hardware connection diagram](/images/redboard_connection.png "Hardware Connection")
 ## Hookup Guide
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The hardware was connected in this order: ph sensor -> Vernier shield -> Sparkfun Redboard -> mini usb -> laptop. The pH sensor is the Vernier SEN -12872, which was connected to the first analog BTA input on the shield with a white BTA (British Telecom Analog) connector.  The SparkFun Vernier Interface Shield Dev-12858 ROHS was connected to the Sparkfun RedBoard DEV-13975 ROHS by positioning it above the Redboard with the pins from the shield lined up with the Redboard’s headers, where the white BTA connectors are on the bottom and the SparkFun RedBoard’s usb input connector is on the top, and finally connecting them by gently pushing down until the boards are connected as one piece.  Finally, the hardware is connected to a laptop by a mini-usb cable, in our case a red mini-B USB cable CAB-11301 ROHS that was 6-foot long connected to the Redboard’s mini- usb female connector next to the reset button on the board.

### Step One
Align the Vernier shield pins with those on the Arduino Redboard, and press them together firmly.  
![](/images/hw1.png)


### Step Two
With the Vernier sensor shield properly secured into the RedBoard, connect the pH probe to the analog 1 port.  
![](/images/hw2.png)


### Step Three
The pH probe, pictured here in its storage solution, will measure the aquarium’s water pH.
![](/images/hw3.png)


### Step Four
Connecting this hardware setup to a laptop running MATLAB, the pH levels are uploaded to a ThingSpeak channel.
![](/images/hw4.png)





## License

[GNU Public 3.0](LICENSE)
