#define i 10
#define ii 9
#define iii 8
#define a 7
#define b 6
#define c 5
#define hor A1
#define ver A0
#define sel 2

int matrix[9][2] = {{i,a}   , {i,b}   , {i,c},
                    {ii,a}  , {ii,b}  , {ii,c},
                    {iii,a} , {iii,b} , {iii,c}}

void refresh(){
  digitalWrite(i, LOW);
  digitalWrite(ii, LOW);
  digitalWrite(iii, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);

}
void setup() {
  pinMode(i, OUTPUT);
  pinMode(ii, OUTPUT);
  pinMode(iii, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(hor, INPUT);
  pinMode(ver, OUTPUT);
  pinMode(sel, INPUT_PULLUP);
}

void loop() {


}
