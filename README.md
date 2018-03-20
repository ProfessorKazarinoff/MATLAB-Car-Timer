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

    * on the Vernier Arduino Interface Shield .
    
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

    % This code will collect data from the Vernier Arduino Interface Shield.

    % Its serial monitor will output 1 when the photgate is blocked from the 
    
    % car going down the ramp, and output 0 when the photogate is unblocked. 
    
    % From that we can calculate the speed by taking the distance over time.


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
    
    % Table output time and speed
    table(time_,speed_)


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
