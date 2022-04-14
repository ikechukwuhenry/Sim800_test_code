#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 9);

void setup()
{
mySerial.begin(9600);
delay(1000);
mySerial.println("AT");
delay(500);
mySerial.println("AT+CMGF=1");
delay(500);
//mySerial.println("AT+CMGS=\"+2348143042627\"\r");
delay(500);
mySerial.print("Hello World from Samuel Markus!");
delay(500);
mySerial.write(26);
}
void loop()
{
}
