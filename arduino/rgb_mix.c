// * COLOR MIXER - Adhyuth Narayan

#define oblue 9
#define ogreen 10
#define ored 11

#define iblue A2
#define igreen A1
#define ired A0

int r;
int g;
int b;

void setup()
{
  pinMode(ored , OUTPUT);
  pinMode(ogreen ,OUTPUT);
  pinMode(oblue , OUTPUT);

  pinMode(ired , INPUT);
  pinMode(igreen ,INPUT);
  pinMode(iblue , INPUT);

  Serial.begin(9600);
}

void loop() 
{

  r = analogRead(ired);
  b = analogRead(iblue);
  g = analogRead(igreen);

  analogWrite(ored,map(r,0,1023,0,255));
  analogWrite(ogreen,map(g,0,1023,0,255));
  analogWrite(oblue,map(b,0,1023,0,255));

}
