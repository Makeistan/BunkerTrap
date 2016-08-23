#include <CustomStepper.h>


int raillimitSwitchPin = 7;    //declaring pin for rail limit switch
int raillimitswitchVal = 0;    //declare button press state
int outputpin = 5;

boolean raillimitswitchArg = false;    //declare state of rail limit switch

CustomStepper railstepper(8, 9, 10, 11);       //asssign pins to the rail stepper motor       

int steps = 10;
char homeposition = 'K';

char inp = NULL;
int old_raildegrees=0;    
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
  
              raillimitswitchVal = digitalRead(raillimitSwitchPin);     //set button state to limitswitch pin output
  
              if (railstepper.isDone() && raillimitswitchVal == LOW && raillimitswitchArg == false) {    //check if railstepper is done, limit switch is not hit and limit switch state is still not hit
                railstepper.setDirection(CCW);                   //set direction of motor to always move towards limit switch 
                railstepper.rotate();                            //start turning the motor until it hits the limitswitch
               // raillimitswitchArg = true;                       //set limit switch state to true
               }
              if (raillimitswitchVal == HIGH && raillimitswitchArg != true) { //if the limit switch is hit and limit switch state is true
                railstepper.setDirection(CW);                            //set direction of rail stepper towards zero postion
                railstepper.rotateDegrees(110);                           //turn on motor to take SET number of steps towards zero
                old_raildegrees = homeposition ;
                raillimitswitchArg = true;
              }
                                                                    
  inp = Serial.read();      //read value from mother

 // int value = inp - 96;
  
  if (railstepper.isDone() && ( inp >= 'A' && inp <= 'Z' ) ){ //If (current position != 150) {move to 150}
  //                                                     if(railstepper.isDone() && inp >= 'a' && inp <= 'z' ){   // test data
     raildegrees = inp - (old_raildegrees);    // to find the location to move
     Serial.println("\n      I am in ");         
     
     if (raildegrees < 0) {
      Serial.print("     CCW move \n      ");
      Serial.println(raildegrees);
      railstepper.setDirection(CCW);
      raildegrees = abs(raildegrees);
      railstepper.rotateDegrees( raildegrees*steps );
      old_raildegrees = inp;                //---------------------------- this is  modified
     }
     else 
     {
     Serial.print("   CW move \n    ");
     Serial.println(raildegrees);
     railstepper.setDirection(CW);
     railstepper.rotateDegrees( raildegrees*steps );
     old_raildegrees= inp ;
     }

    
   }

   if (railstepper.isDone() && raillimitswitchArg == true ){
                                                                //  if (railstepper.isDone()){
        digitalWrite(outputpin ,HIGH);
        delay (100);
        digitalWrite(outputpin ,LOW);
        Serial.print ("complete");
        delay (1);
  }
//  inp = NULL;
  railstepper.run();                             //run rail stepper run command           
}
