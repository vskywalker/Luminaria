  
int mic = 6;
int pinosom = A5; 

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(pinosom, INPUT); // Define o pino de entrada do sensor de som
  pinMode(mic,INPUT);
  
}

int brilho =0;

void loop(){
  int sinal = digitalRead(mic);
  //   brilho = map(som,valorsilencio,valormusica,0,240); // Opção para um ajuste mais fino do brilho
  if(sinal == 1){
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    
  }
  
 
  

}
