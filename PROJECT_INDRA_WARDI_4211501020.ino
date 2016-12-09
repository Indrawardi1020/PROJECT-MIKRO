float V;
float Vin  = 5;
float Vout = 0;
float R1= 10;
int R2= 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  V= analogRead(A0);
  Serial.print("V : ");
  Serial.println(V);
  Vout= (V*Vin)/1023;
  Serial.print("Vout : ");
  Serial.println(Vout);
  
  R2= (Vout*R1)/(Vin-Vout);
  
  Serial.print("R2: ");
  
  Serial.println(R2);

  delay(1000);
  
}

