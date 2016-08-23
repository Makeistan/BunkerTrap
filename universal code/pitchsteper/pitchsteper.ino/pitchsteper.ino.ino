#include <CustomStepper.h>


int raillimitSwitchPin = 7;    //declaring pin for rail limit switch
int raillimitswitchVal = 0;    //declare button press state
int outputpin = 5;

boolean raillimitswitchArg = false;    //declare state of rail limit switch

CustomStepper railstepper(8, 9, 10, 11);       //asssign pins to the rail stepper motor       

int steps = 200;


char inp = 'b';
int old_raildegrees='b';     // --------------modidied-------
int raildegrees=0;

int currentposition = 0;
int inputposition = 0;

void setup() {
  Serial.begin(9600);
  pinMode(raillimitSwitchPin, INPUT); //set limitswitch pin to INPUT
  railstepper.setRPM(16);             //rail stepper speed setting
  railstepper.setSPR(4075.7728395);   //rail stepper steps in one rotation
  pinMode(outputpin, OUTPUT);  
}

void loop() {
/*  
              raillimitswitchVal = digitalRead(raillimitSwitchPin);     //set button state to limitswitch pin output
  
              if (railstepper.isDone() && raillimitswitchVal == LOW && raillimitswitchArg == false) {    //check if railstepper is done, limit switch is not hit and limit switch state is still not hit
                railstepper.setDirection(CCW);                   //set direction of motor to always move towards limit switch 
                railstepper.rotate();                            //start turning the motor until it hits the limitswitch
                raillimitswitchArg = true;                       //set limit switch state to true
               }
              if (raillimitswitchVal == HIGH && raillimitswitchArg == true) { //if the limit switch is hit and limit switch state is true
                railstepper.setDirection(CW);                            //set direction of rail stepper towards zero postion
                railstepper.rotateDegrees(400);                           //turn on motor to take SET number of steps towards zero
                old_raildegrees=2;
                
              }
  */                                                                  
  inp = Serial.read();      //read value from mother

 // int value = inp - 96;
  
 // if (railstepper.isDone() &&  inp == 'a' && old_raildegrees!=200){ //If (current position != 150) {move to 150}
                                                       if(railstepper.isDone() && inp >= 'a' && inp <= 'z' ){
    raildegrees = inp - (old_raildegrees);
    Serial.println("WEEEEEEEE");
     if (raildegrees < 0) {
      Serial.print("CCW move");
      Serial.println(raildegrees);
      railstepper.setDirection(CCW);
      raildegrees = abs(raildegrees);
      railstepper.rotateDegrees( raildegrees*steps );
      old_raildegrees = inp;                //---------------------------- this should be modified
     }
     else 
     {
     Serial.print("CW move");
     Serial.println(raildegrees);
     railstepper.setDirection(CW);
     railstepper.rotateDegrees( raildegrees*steps );
     old_raildegrees= inp ;
     }

    
   }
/*
  if (railstepper.isDone() && inp == 'b' && old_raildegrees!=400){
    
    raildegrees=400-(old_raildegrees);
     if (raildegrees < 0) {
      railstepper.setDirection(CCW);
      raildegrees = abs(raildegrees);   // for - answers
      railstepper.rotateDegrees(raildegrees);
      old_raildegrees=400;
      
     }
     else 
     {
     railstepper.setDirection(CW);
     railstepper.rotateDegrees(raildegrees);
     old_raildegrees=400;
     }
  }
  if (railstepper.isDone() && inp == 'c' && old_raildegrees!=600){
    
    raildegrees=600-(old_raildegrees);
     if (raildegrees < 0) {
      railstepper.setDirection(CCW);
      raildegrees = abs(raildegrees);
      railstepper.rotateDegrees(raildegrees);
      old_raildegrees=600;
     }
     else 
     {
     railstepper.setDirection(CW);
     railstepper.rotateDegrees(raildegrees);
     old_raildegrees=600;
     }
  }
  */ 
  // if (railstepper.isDone() && raillimitswitchArg == true ){
                                                                  if (railstepper.isDone()){
        digitalWrite(outputpin ,HIGH);
        delay (100);
        digitalWrite(outputpin ,LOW);
        Serial.print ("complete");
        delay (1000);
  }
//  inp = NULL;
  railstepper.run();                             //run rail stepper run command           
}
