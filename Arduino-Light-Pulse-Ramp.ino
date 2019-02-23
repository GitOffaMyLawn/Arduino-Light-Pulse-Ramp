// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6
#define delayTime 10 // fading time between colors

// define variables
int redVal;
int greenVal;
int blueVal;
int overallVal;
int colorNum;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  analogWrite(RED, redVal);
  analogWrite(GREEN, greenVal);
  analogWrite(BLUE, blueVal);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int j=0;j<3;j+=1)
  {
    if(j==0)
    {
      colorNum=RED;
    }
    else if(j==1)
    {
      colorNum=BLUE;
    }
    else if(j==2)
    {
      colorNum=GREEN;
    }
    
    //brighten up
    for(int i = 0; i < 255; i += 1) // fades out red bring green full when i=255
    {
    if(i%10<8)
    {
      analogWrite(colorNum, i);
    }
    else
    {
      analogWrite(colorNum, 0);
    }
    delay(delayTime);
    }
    //brighten down
    for(int i = 255; i >= 0; i -= 1) // fades out red bring green full when i=255
    {
    if(i%10<8)
    {
      analogWrite(colorNum, i);
    }
    else
    {
      analogWrite(colorNum, 0);
    }
    delay(delayTime);
    }
  }
}
