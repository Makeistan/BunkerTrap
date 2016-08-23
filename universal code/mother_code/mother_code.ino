char  schemes[9][3][25] = { 
  {   { '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3' },
    { 'o', 'o', 'i', 'c', 'c', 'n', 'n', 'l', 'c', 'c', 'q', 'q', 'i', 'a', 'a', 'r', 'r', 'j', 'e', 'e', 's', 's', 'k', 'c', 'c' },
    { 'F', 'F', 'P', 'A', 'A', 'K', 'K', 'D', 'P', 'P', 'R', 'R', 'A', 'B', 'B', 'A', 'A', 'S', 'K', 'K', 'J', 'J', 'E', 'U', 'U' } },
  
  { { '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3' },
    { 'o', 'o', 'i', 'b', 'b', 'r', 'r', 'j', 'a', 'a', 's', 's', 'j', 'b', 'b', 'm', 'm', 'k', 'c', 'c', 'r', 'r', 'i', 'b', 'b' },
    { 'R', 'R', 'D', 'F', 'F', 'F', 'F', 'P', 'B', 'B', 'A', 'A', 'N', 'F', 'F', 'A', 'A', 'F', 'D', 'D', 'D', 'D', 'A', 'S', 'S' } },
  
  { { '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3' },
    { 'p', 'p', 'j', 'c', 'c', 's', 's', 'i', 'b', 'b', 'p', 'p', 'k', 'a', 'a', 's', 's', 'j', 'b', 'b', 's', 's', 'j', 'c', 'c' },
    { 'K', 'K', 'N', 'U', 'U', 'A', 'A', 'K', 'C', 'C', 'N', 'N', 'U', 'A', 'A', 'I', 'I', 'P', 'B', 'B', 'F', 'F', 'A', 'H', 'H' } },
  
  { { '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3' },
    { 'r', 'r', 'l', 'd', 'd', 'p', 'p', 'h', 'c', 'c', 's', 's', 'j', 'f', 'f', 'p', 'p', 'i', 'a', 'a', 'q', 'q', 'j', 'd', 'd' },
    { 'P', 'P', 'A', 'H', 'H', 'B', 'B', 'R', 'F', 'F', 'F', 'F', 'S', 'A', 'A', '-', '-', 'F', 'N', 'N', 'K', 'K', 'B', 'P', 'P' } },
  
  { { '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3' },
    { 's', 's', 'j', 'a', 'a', 'r', 'r', 'h', 'a', 'a', 'q', 'q', 'i', 'b', 'b', 'o', 'o', 'j', 'd', 'd', 'p', 'p', 'l', 'g', 'g' },
    { 'B', 'B', 'P', 'F', 'F', 'N', 'N', 'A', 'F', 'F', 'P', 'P', 'D', 'A', 'A', 'D', 'D', 'B', 'T', 'T', 'F', 'F', 'J', 'D', 'D' } },
  
  { { '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3' },
    { 'r', 'r', 'j', 'c', 'c', 'q', 'q', 'l', 'c', 'c', 'q', 'q', 'i', 'r', 'r', 's', 's', 'h', 'e', 'e', 'o', 'o', 'k', 'a', 'a' },
    { 'F', 'F', 'S', 'A', 'A', 'K', 'K', 'A', 'F', 'F', 'F', 'F', 'A', 'S', 'S', 'A', 'A', 'P', 'L', 'L', 'J', 'J', 'A', 'F', 'F' } },
  
  { { '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3' },
    { 'q', 'q', 'i', 'f', 'f', 'r', 'r', 'j', 'a', 'a', 'n', 'n', 'j', 'b', 'b', 's', 's', 'k', 'c', 'c', 'r', 'r', 'i', 'a', 'a' },
    { 'H', 'H', 'P', 'Q', 'Q', 'F', 'F', 'U', 'N', 'N', 'P', 'P', 'F', 'H', 'H', 'A', 'A', 'F', 'D', 'D', 'D', 'D', 'A', 'F', 'F' } },
  
  { { '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3' },
    { 'o', 'o', 'k', 'a', 'a', 'r', 'r', 'j', 'a', 'a', 'q', 'q', 'i', 'f', 'f', 's', 's', 'j', 'd', 'd', 'p', 'p', 'l', 'g', 'g' },
    { 'P', 'P', 'A', 'F', 'F', 'A', 'A', 'P', 'N', 'N', 'R', 'R', 'K', 'F', 'F', 'D', 'D', 'A', 'T', 'T', 'F', 'F', 'T', 'H', 'H' } },
    
  { { '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3', '1', '1', '2', '3', '3' },
    { 'r', 'r', 'j', 'f', 'f', 'm', 'm', 'h', 'c', 'c', 's', 's', 'j', 'd', 'd', 'p', 'p', 'i', 'g', 'g', 'q', 'q', 'j', 'a', 'a' },
    { 'U', 'U', 'D', 'P', 'P', 'R', 'R', 'A', 'F', 'F', 'B', 'B', 'N', 'P', 'P', 'F', 'F', 'F', 'P', 'P', 'O', 'O', 'B', 'H', 'H' } } };
  
  int players = 0; int input_scheem = 0 ; int counter = 0 ; int randno =25 ; int temp_counter = 0; char rail , yaw, pitch;
 
  int repeattemp =0;int repeat =0; int repeatbutton = 4 ; int repeatinp = 0 ; bool repeatbool = false;
  
  bool start = true; int finishcounter = 0; int arduinos = 2 ; int pushbutton = 3;int arduinp = 0 ; int pushbutinp = 0; bool arduinosbool = false ; bool pushbuttonbool =false;
  
  int disks [6][25];  // allocation of arrey 

  bool aurdinostart = true; 
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ copied from privious code
  int yaw_input = 10;     // pins decleared
int pitch_input = 9;
int rail_input = 8;

int y_value = 0;      // input get from childs 
int r_value = 0;
int p_value = 0;

bool yawbool = false;     // check input 
bool railbool = false;
bool pitchbool = false;
//bool pull = false;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@222

void setup() {//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^SETUP
  // put your setup code here, to run once:
//Serial.begin(9600);
  Serial.begin(19200);
   Serial1.begin(9600);
   Serial2.begin(9600);
   Serial3.begin(9600);
  pinMode(yaw_input, INPUT);
  pinMode(pitch_input, INPUT);
pinMode(rail_input, INPUT);

for(int x = 0 ; x < 6 ; x++)    //inteliatization of arrey
  for (int y = 0 ; y < 25 ; y++)
    disks [x][y] = y;

// pinMode (arduinos , INPUT) ;
  pinMode (pushbutton , INPUT);
  pinMode (repeatbutton , INPUT);
   randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.println(schemes[1][7][1]);
  if (start == true){ // run only on start
    
    bool playerno = false ; bool scem_inp = false; 
    
    while (playerno == false ){ // to take input of no of players 
      Serial.print("input the no of player");
      int  temp =  Serial.read();   // variable taking input from user
        players = temp - 48;        // 48 is ascii of '0'
        if (players > 0)            // if got some value
          playerno =true;
        delay (50);
    }
    while (scem_inp == false ){ // to take input of no of players 
      Serial.println("input the no of scheem");
      int  temp =  Serial.read();   // variable taking input from user
        input_scheem = temp - 48;        // 48 is ascii of '0'
        if (input_scheem > 0)            // if got some value
          scem_inp =true;
          delay (50);
  }
  
  start =false;
}
  
  /*{ // test data
  //  Serial.print(players);
   // int randomed = random(300) % randno;
   // Serial.println (randomed);
    Serial.print ("rail  ");
    Serial.print (rail);
    Serial.print (" yaw ");
    Serial.print (yaw);
    Serial.print (" pitch ");
    Serial.print (pitch);
    Serial.print (" randno ");
    Serial.print (randno);
    Serial.print ("  Counter  ");
    Serial.print (finishcounter);
    Serial.print ("\n-----------------------------------------\n");
  }*/

  arduinp =digitalRead(arduinos) ;  pushbutinp = digitalRead(pushbutton) ; if (finishcounter > 0 ) repeatinp = digitalRead(repeatbutton); // input taken from arduinos and pushbutton
 // if( arduinp ==HIGH) arduinosbool = true;
  //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    y_value = digitalRead ( yaw_input );
  r_value = digitalRead ( rail_input );
  p_value = digitalRead ( pitch_input );
//  pull_value = digitalRead ( pull_value );

  if ( y_value == HIGH )
  {
     yawbool = true;
  }
  if ( r_value == HIGH )
  {
    railbool = true;
  }
  
  if ( p_value == HIGH )
    {
      pitchbool = true;
    }
    
 if ( yawbool == true && railbool == true && pitchbool == true){
    arduinosbool = true ;
 }
    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  if( pushbutinp ==HIGH) pushbuttonbool = true;
  if( repeatinp ==HIGH && finishcounter > 2) repeatbool = true;
  
  if(start == false){

    if( arduinosbool == true && ( repeatbool == true || (pushbuttonbool == true || aurdinostart == true))){  //+++++++++++++ secondaey startbshould be true for it
      
      if(repeatbool == false &&(pushbuttonbool == true || aurdinostart == true) ){
        int randm = random(300) % randno;                  // random no generator                                                                                  
        int indexofscheem  = disks[counter][randm];  // picking up the index for secheem
        int temp = disks[counter][randno - 1 ];         // swaping code 
        disks[counter][randno - 1] = disks[counter][randm];
        disks[counter][randm] = temp;
    
        counter ++; finishcounter++;      // added up for next player
        if (counter == players){
         counter = 0 ;
         randno--;
        }
    
         rail = schemes[ input_scheem ][0][indexofscheem];
        yaw = schemes[ input_scheem ][1][indexofscheem];
        pitch = schemes[ input_scheem ][2][indexofscheem];
        yawbool =false; railbool =false; pitchbool=false; pushbuttonbool =false; aurdinostart = false;

        if (finishcounter > 1)      // this is our repeat functiom
          repeat = repeattemp;
        if (finishcounter > 0)
          repeattemp = indexofscheem;
      }
        
      if(repeatbool == true && aurdinostart == false ){   // this is repeat function   //+++++++++++++ secondaey startbshould be false for it
       if (finishcounter > 1 ) {
        rail = schemes[ input_scheem ][0][repeat];
        yaw = schemes[ input_scheem ][1][repeat];
         pitch = schemes[ input_scheem ][2][repeat];
         Serial.print ("  @@@@@@@@@@@@@@@@@@@@@@@@@@ repeat     > 2  ");
       }
       else{
        rail = schemes[ input_scheem ][0][repeattemp];
        yaw = schemes[ input_scheem ][1][repeattemp];
        pitch = schemes[ input_scheem ][2][repeattemp];
       Serial.print ("  @@@@@@@@@@@@@@@@@@@@@@@@@@ repeat     else  ");
       }
       if (counter == 0 )  counter = players -1;
       else counter--;
       
       yawbool =false; railbool =false; pitchbool=false; pushbuttonbool =false;
       repeatbool = false;
      }

      {   // //////////////////    PRINTING
            Serial.print ("rail  ");
    Serial.print (rail);
    Serial.print (" yaw ");
    Serial.print (yaw);
    Serial.print (" pitch ");
    Serial.print (pitch);
    Serial.print (" randno ");
    Serial.print (randno);
    Serial.print ("  Counter  ");
    Serial.print (finishcounter);
    Serial.print ("\n-----------------------------------------\n");
      }

      {
            Serial1.write (rail);
            delay(10);
            Serial2.write (yaw);
            delay(10);
            Serial3.write (pitch);
            delay(100);
            rail =0; yaw = 0; pitch = 0;
      }
      
        
    }
    if (finishcounter >= 25*players )      // when game is finished
      while (true){
        Serial.println("I am finished");
        delay(1000);
      }
    
  }
  
  delay(500);
}
