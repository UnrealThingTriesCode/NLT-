//Declaring i/o 
const int led = 13;
const int buzzer = 8;

//Declaring basic variables
String code = "";
int len = 0;
char ch;
char new_char;
int delay_ms = 200;

//Gives instructions about what to do with a *
void dot()
{
  Serial.print(".");
  digitalWrite(led, HIGH);
  digitalWrite(buz, HIGH);
  delay(delay_ms);
  digitalWrite(led, LOW);
  digitalWrite(buz, LOW);
  delay(delay_ms);
}
//Gives instructions on what to do with a -
void dash()
{
  Serial.print("-");
  digitalWrite(led, HIGH);
  digitalWrite(buz, HIGH);
  delay(delay_ms * 3);
  digitalWrite(led, LOW);
  digitalWrite(buz, LOW);
  delay(delay_ms);
}

//Turns each letter into it's morse equivalent 
void A()
{
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void B()
{
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void C()
{
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void D()
{
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void E()
{
  dot();
  delay(delay_ms);
}
void f()
{
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void G()
{
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void H()
{
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void I()
{
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void J()
{
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void K()
{
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void L()
{
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void M()
{
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void N()
{
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void O()
{
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void P()
{
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dot();
}
void Q()
{
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void R()
{
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void S()
{
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void T()
{
  dash();
  delay(delay_ms);
}
void U()
{
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void V()
{
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void W()
{
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void X()
{
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void Y()
{
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void Z()
{
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void one()
{
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void two()
{
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void three()
{
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void four()
{
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void five()
{
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void six()
{
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void seven()
{
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void eight()
{
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void nine()
{
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dot();
  delay(delay_ms);
}
void zero()
{
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
  dash();
  delay(delay_ms);
}
void morse()
{
  if (ch == 'A' || ch == 'a')
  {
    A();
    Serial.print(" ");
  }
  else if (ch == 'B' || ch == 'b')
  {
    B();
    Serial.print(" ");
  }
  else if (ch == 'C' || ch == 'c')
  {
    C();
    Serial.print(" ");
  }
  else if (ch == 'D' || ch == 'd')
  {
    D();
    Serial.print(" ");
  }
  else if (ch == 'E' || ch == 'e')
  {
    E();
    Serial.print(" ");
  }
  else if (ch == 'f' || ch == 'f')
  {
    f();
    Serial.print(" ");
  }
  else if (ch == 'G' || ch == 'g')
  {
    G();
    Serial.print(" ");
  }
  else if (ch == 'H' || ch == 'h')
  {
    H();
    Serial.print(" ");
  }
  else if (ch == 'I' || ch == 'i')
  {
    I();
    Serial.print(" ");
  }
  else if (ch == 'J' || ch == 'j')
  {
    J();
    Serial.print(" ");
  }
  else if (ch == 'K' || ch == 'k')
  {
    K();
    Serial.print(" ");
  }
  else if (ch == 'L' || ch == 'l')
  {
    L();
    Serial.print(" ");
  }
  else if (ch == 'M' || ch == 'm')
  {
    M();
    Serial.print(" ");
  }
  else if (ch == 'N' || ch == 'n')
  {
    N();
    Serial.print(" ");
  }
  else if (ch == 'O' || ch == 'o')
  {
    O();
    Serial.print(" ");
  }
  else if (ch == 'P' || ch == 'p')
  {
    P();
    Serial.print(" ");
  }
  else if (ch == 'Q' || ch == 'q')
  {
    Q();
    Serial.print(" ");
  }
  else if (ch == 'R' || ch == 'r')
  {
    R();
    Serial.print(" ");
  }
  else if (ch == 'S' || ch == 's')
  {
    S();
    Serial.print(" ");
  }
  else if (ch == 'T' || ch == 't')
  {
    T();
    Serial.print(" ");
  }
  else if (ch == 'U' || ch == 'u')
  {
    U();
    Serial.print(" ");
  }
  else if (ch == 'V' || ch == 'v')
  {
    V();
    Serial.print(" ");
  }
  else if (ch == 'W' || ch == 'w')
  {
    W();
    Serial.print(" ");
  }
  else if (ch == 'X' || ch == 'x')
  {
    X();
    Serial.print(" ");
  }
  else if (ch == 'Y' || ch == 'y')
  {
    Y();
    Serial.print(" ");
  }
  else if (ch == 'Z' || ch == 'z')
  {
    Z();
    Serial.print(" ");
  }
  else if (ch == '0')
  {
    zero();
    Serial.print(" ");
  }
  else if (ch == '1')
  {
    one();
    Serial.print(" ");
  }
  else if (ch == '2')
  {
    two();
    Serial.print(" ");
  }
  else if (ch == '3')
  {
    three();
    Serial.print(" ");
  }
  else if (ch == '4')
  {
    four();
    Serial.print(" ");
  }
  else if (ch == '5')
  {
    five();
    Serial.print(" ");
  }
  else if (ch == '6')
  {
    six();
    Serial.print(" ");
  }
  else if (ch == '7')
  {
    seven();
    Serial.print(" ");
  }
  else if (ch == '8')
  {
    eight();
    Serial.print(" ");
  }
  else if (ch == '9')
  {
    nine();
    Serial.print(" ");
  }
  else if(ch == ' ')
  {
    delay(delay_ms*5);
    Serial.print("/ ");
  }
}

void String2Morse()
{
  len = code.length();
  for (int i = 0; i < len; i++)
  {
    ch = code.charAt(i);
    morse();
  }
}
//Begins the basic UI
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buz, OUTPUT);
  Serial.println("Welkom bij de morsevertaler van Xebian en Sunka, voer hier jouw woorden in...");
}
//Turns the morse equivalents into printed text
void loop() {
  while (Serial.available())
  {
    code = Serial.readString();
    Serial.print(code);
    Serial.print(" = ");
    String2Morse();
    Serial.println("");
  }
  delay(1000);
}
