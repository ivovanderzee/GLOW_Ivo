
//Variabelen voor lamp 1
int ledOne = 13;
int ldrOne = A0;

//Variabelen voor lamp 2
int ledTwo = 12;
int ldrTwo = A1;

//Variabelen voor lamp 3
int ledThree = 11;
int ldrThree = A2;

//Variabelen voor lamp 4
int ledFour = 10;
int ldrFour = A3;

boolean x = true;
boolean y = true;







void setup() {
  

  Serial.begin(9600);
  pinMode(ldrOne, INPUT);
  pinMode(ldrTwo, INPUT);
   pinMode(ldrThree, INPUT);
  pinMode(ldrFour, INPUT);

  
  pinMode(ledOne, OUTPUT);
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);

  

digitalWrite(ledOne, HIGH);
digitalWrite(ledTwo, HIGH);
  

 
 

}

void loop() {


  
  int ldrStatOne = analogRead(ldrOne);
  Serial.println("ldr 1");
  Serial.println(ldrStatOne);
  

  int ldrStatTwo = analogRead(ldrTwo);
  Serial.println("ldr 2");
  Serial.println(ldrStatTwo);

  int ldrStatThree = analogRead(ldrThree);
  Serial.println("ldr 3");
  Serial.println(ldrStatThree);

  int ldrStatFour = analogRead(ldrFour);
  Serial.println("ldr 4");
  Serial.println(ldrStatFour);

delay(100);




if(ldrStatOne > 60 && x == true){
  
digitalWrite(ledOne, LOW);
digitalWrite(ledThree, HIGH);

x = false;


  
}


else if (ldrStatThree > 50 && x == false )
{
  digitalWrite(ledOne, HIGH);
  digitalWrite(ledThree, LOW);
  

  x = true;
  
}


if(ldrStatTwo >30 && y == true){
  
digitalWrite(ledTwo, LOW);
digitalWrite(ledFour, HIGH);

y = false;


  
}


else if (ldrStatFour >60 && y == false )
{
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledFour, LOW);
  

  y = true;
  
}















}

