
//Code voor het eerste prototype

//Variabelen die in de code gebruikt worden
int ldr = A0;
int ldrValue;
int LED = 13;

void setup() {

  //pin 13 word geconfigureerd voor OUTPUT
  pinMode(LED, OUTPUT);

  //pin A0 word geconfigureerd voor INPUT
  pinMode(ldr, INPUT);

  //Start de console zodat hier de waarde van de LDR uitgelezen kan worden
  Serial.begin(9600);

}

void loop() {

//Leest de waarde van de LDR uit
ldrValue = analogRead(ldr);

//Print de waarde van de LDR in de console
Serial.println(ldrValue)


//IF statement dat steeds checkt wat de waarde is van de LDR

//Hand op de LDR
if(ldrValue < 10){

  digitalWrite(LED, HIGH);

  //Hand is niet op de LDR
}else{

  digitalWrite(LED, LOW);
}

}
