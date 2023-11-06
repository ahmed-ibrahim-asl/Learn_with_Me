
#define trigPin1 5
#define echoPin1 7





void setup() {
  // put your setup code here, to run once:

  pinMode(2, INPUT);
  pinMode(4, INPUT);

  // motors pins 
  for(int i = 8; i<=11; i++)
    pinMode(i, OUTPUT);


  //ultraSonic
  pinMode(5, OUTPUT);
  pinMode(7, INPUT);
}

inline float grapDistance(){

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);

  delayMicroseconds(10);
  digitalWrite(trigPin, HIGH);


  return (pulseIn(echoPin, HIGH)/2)*0.034;
}


void loop() {
  
  while(digitalRead(2) == 1 && digitalRead(4) == 1){

    if(grapDistance() <=20){
      digitalWrite(8, 0);
      digitalWrite(9, 1);

      digitalWrite(10, 1);
      digitalWrite(11, 0);
    }

    else{

      digitalWrite(8, 1);
      digitalWrite(9, 0);

      digitalWrite(10, 1);
      digitalWrite(11, 0);
    }

  }

  if(digitalRead(2) == 0 || digitalRead(4) == 0){

      digitalWrite(8, 1);
      digitalWrite(9, 0);

      digitalWrite(10, 0);
      digitalWrite(11, 1);
      
      delay(1500);
  }

}
