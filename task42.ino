

int Blink(String led);

int BLUE = D7;
int RED = D6;
int GREEN = D5;

int dash = 2700;
int dot = 500;
int lowtime = 700;

void setup() {


  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
  Particle.function("blink", Blink);
  

}


void loop() {
    
}

int Blink(String led)
{
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
  if(led=="red"){
      digitalWrite(RED, HIGH);
      return 1;
  }
  else if(led=="green"){
      digitalWrite(GREEN, HIGH);
      return 1;
  }
  else if(led=="blue")
  {
      digitalWrite(BLUE, HIGH);
       return 1;
  }
  else
  {
       return -1;
  }
  
  
  
}

