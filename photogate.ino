/* VernierTutorialPhotogate (v2017)

 * This sketch will send a status message to the Serial 

 * Monitor on whether the Photogate is blocked or unblocked.

 * It will also turn on the LED (pin D13) when the 

 * photogate is blocked.

 * 

 * Plug the Photogate into the Digital 1 port on the 

 * Vernier Arduino Interface Shield.

 */


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
