**Team:** Clockwork Radishes <br />
**Group Member Names:** Teng Xiong, Layal Abdeljawad, Kaylie Thomas <br />
**Course and Quarter:** Engineering 114 Winter 2018 <br />
**Date:** March 20, 2018   <br />
**Revision:** Version 1.0   <br />

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
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;

    /* VernierTutorialPhotogate (v2017)

    * This sketch will send a status message to the Serial 

    * Monitor on whether the Photogate is blocked or unblocked.

    * It will also turn on the LED (pin D13) when the 

    * photogate is blocked.

    * 

    * Plug the Photogate into the Digital 1 port, and Digital 2 port  

    * on the Vernier Arduino Interface Shield or into a Digital  

    * Protoboard Adapter wired to Arduino pins 2, 3, 4, and 5.

    */


    //create global variable for pin assignment to sensor
    int sensorPin = 2; 
    int sensorPin2 = 6;

    //create global variable for pin assignment to sensor
    int sensorPin = 2; 
    int sensorPin2 = 6;

    //create global variable for pin assignment to LED
    int LEDpin = 13; 
    int LEDpin2 = 13;

    //create global variable for photogate status: LOW=blocked, HIGH=unblocked
    int photogateStatus;
    int photogateStatus2;


    void setup() {

    //setup communication to display
    Serial.begin(9600); 

    //setup LED indicator
    pinMode(LEDpin, OUTPUT); 
    pinMode(LEDpin2, OUTPUT);

    }

  

    void loop() {
  
    //get status of photogate
    photogateStatus = digitalRead(sensorPin);
    photogateStatus2 = digitalRead(sensorPin2);

    //check if photogate blocked
    if (photogateStatus == LOW) 

     { 
    
     //turn on LED 
    digitalWrite(LEDpin, HIGH);

    //print status message
    Serial.println(1); 

    }

    else if (photogateStatus2 == LOW)
    {

    digitalWrite(LEDpin2, HIGH);

    Serial.println(1);
    }


    else 

    {

     //turn off LED
    digitalWrite(LEDpin, LOW); 
    digitalWrite(LEDpin2, LOW);

     //print status message 
    Serial.println(0);  

    }
    delay(100);
    }
    
### MATLAB Code
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;

    %% Arduino Group Project: Read Serial from an Arduino and Output the Speed

    % This code will collect data formatted as a string over the 

    % light level for the course of that time using the connected Arduino

    % Hardware.


    % Revised by: ENGR114 Students at Portland Community College, Winter 2018

    % Revised on: 03/15/2018
 
    % Description: Code for reading the speed of car

    %% Clc, Clear all, Close all
    clc,clear all, close all % clears command window, workspace varaibles, and closes everything opened

    %% Input of time
    duration = input('Enter the number of data points you want to collect (~10 data points per second): ')

    %% Set up serial port and ensure it outputs data
    % Change COM3 to the Port the Arduino is connected to

    Port = 'COM3';         % Port the Arduino is connected to

    delete(instrfindall);  % deletes any connected ports

    a = serial(Port);      % connect to the arduino in order to read information 

    fopen(a);              % opens the serial port

    pause(1);              % pause() for 1 second to make sure a connection is made

    out1 = instrfind('Port',Port) % see if any Ports are open

    out = fscanf(a) ;      % read one time from the serial port

    %% Set up the animated figure

    figure
    h = animatedline;

    ax = gca;
    ax.YGrid = 'on';
    ax.YLim = [0 1.2];       % the serial output range

    xlabel('Data Point (#)');
    ylabel('Reads Sensor');
    title('Photosensor Readings over time');

    x=linspace(1,duration,duration);  % can change to change the number of data points 

    startTime = datetime('now');
    saved_data = [0 0];

    %% Collect serial data

    try

    for i=1:length(x);

    data = fscanf(a, '%s'); % reads the data from the arduino code

    data = str2num(data);

    saved_data(end+1) = data;

    t =  datetime('now') - startTime;  % updates the time

    addpoints(h,datenum(t),data)       % adds the data point to the figure

    % Update axes

    ax.XLim = datenum([0 t]);

    datetick('x','keeplimits')

    drawnow

    end

    end
 
    %% close the serial port

    fclose(a);
    delete(a)
    clear a;

    %% Calculate the Speed of car 

    start_index = [];
    for i = 2:numel(saved_data); % loctaing the 1's in the matrix
     if saved_data(i) - saved_data(i-1) == 1; % finds when sensor 1 is blocked & when sensor 2 is blocked
        start_index(end+1) = i;
       end
    end

    start_end = start_index(1,1:2); % gets the matrix
    start_end_2 = start_end(1,2) - start_end(1,1); % start - end
    time_= start_end_2 / 10 % time of car
    speed_ = time_ / 3 % speed of car



# Results
|  Trial         |   Time(s)             |   Speed(m/s)             |
|----------------|--------------------------------------------------|----------:|
|    1           |     1.7               |      0.567               |
|    2           |     1.3               |      0.433               |
|    3           |     0.8               |      0.268               |
|    4           |     1.3               |      0.433               |
|    5           |     2.0               |      0.667               |
|    6           |     1.2               |      0.4                 |
|    7           |     1.1               |      0.367               |
|    8           |     1.7               |      0.567               |
|    9           |     1.2               |      0.4                 |
|    10          |     1.9               |      0.633               |


# Future Work
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; In the MATLAB code, the time phase is manually inputted by the user. Instead, when the program is run there should be a start button. When the user presses start(Enter) the program should be ready to start saving the data. But the timing would actually begin when the first sensor is blocked and end when the second sensor gets blocked. This will be more sufficient when taking in the data and will have a less percent error aswell. 


## License

[GNU Public 3.0](LICENSE)
