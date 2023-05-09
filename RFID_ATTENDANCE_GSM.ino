#include <SPI.h>
#include <MFRC522.h>

//gsm
#include <SoftwareSerial.h>
SoftwareSerial mySerial(1, 0);
char msg;
char call;
//gsm

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);

String card_ID = "";

String Name1 = "1171285747";
String Name2 = "17019212125";
String Name3 = "16312423969";
String Name4 = "2439223069";
String Name5 = "1608387101";
String Name6 = "16311625469";
String Name7 = "1178912744";
String Name8 = "191831470";
String Name9 = "218416621";
String Name10 = "2271721669";
String Name11 = "841820248";
String Name12 = "10367199198";


int NumbCard[12];
int j = 0;
int statuss[12];
int s = 0;

int const RedLed = 6;
int const GreenLed = 5;
int const Buzzer = 8;

String Name;//user name
long Roll;//user number
String BRANCH;
int ID = 1;
void setup() {
//gsm
mySerial.begin(9600);
//gsm
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();

  Serial.println("CLEARSHEET");
  Serial.println("LABEL,SERIAL,Date,Name,ROLL,BRANCH,Time IN,Time OUT");

  pinMode(RedLed, OUTPUT);
  pinMode(GreenLed, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  delay(200);
}

void loop() {

  if ( ! mfrc522.PICC_IsNewCardPresent()) {
    return;
  }

  if ( ! mfrc522.PICC_ReadCardSerial()) {
    return;
  }

  for (byte i = 0; i < mfrc522.uid.size; i++) {
    card_ID += mfrc522.uid.uidByte[i];
  }

  //Serial.println(card_ID);

  if (card_ID == Name1) {
    Name = "SRIKANTH SIR";
    Roll = 1;
    BRANCH = "ECE";
    j = 0;
    s = 0;
    //gsm
   mySerial.println("ATD8977801788;");
   mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
   delay(1000);  // Delay of 1000 milli seconds or 1 second

   mySerial.println("AT+CMGS=\"+918977801788\"\r"); // Replace x with mobile number

   delay(1000);

   delay(100);
   mySerial.println("srikanth sir attendance recorded");
   mySerial.println((char)26);// ASCII code of CTRL+Z
   delay(1000);
    //gsm
//          Serial.println("ATD8977801788;"); // ATDxxxxxxxxxx;

       Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     Serial.println("AT+CMGS=\"+918977801788\"\r");
     Serial.println("srikanth sir attendance recorded");
     Serial.println((char)26);
     //delay(100);
  }
  else if (card_ID == Name2) {
    Name = "HARSHA";
    Roll = 419;
    BRANCH = "ECE D";
    j = 1;
    s = 1;
//    //gsm
   mySerial.println("ATD8977801788;");
   mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
   delay(1000);  // Delay of 1000 milli seconds or 1 second

   mySerial.println("AT+CMGS=\"+918977801788\"\r"); // Replace x with mobile number

   delay(1000);

   delay(100);
   mySerial.println("Harsha attendance recorded");
   mySerial.println((char)26);// ASCII code of CTRL+Z
   delay(1000);
//    //gsm
//          Serial.println("ATD8977801788;"); // ATDxxxxxxxxxx;

       Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     Serial.println("AT+CMGS=\"+918977801788\"\r");
     Serial.println("HARSHA attendance recorded");
     Serial.println((char)26);
     //delay(100);
  }
  else if (card_ID == Name3) {
    Name = "VINATHI";
    Roll = 420;
    BRANCH = "ECE D";
    j = 2;
    s = 2;
    //gsm
   mySerial.println("ATD8977801788;");
   mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
   delay(1000);  // Delay of 1000 milli seconds or 1 second

   mySerial.println("AT+CMGS=\"+918977801788\"\r"); // Replace x with mobile number

   delay(1000);

   delay(100);
   mySerial.println("vinathi attendance recorded");
   mySerial.println((char)26);// ASCII code of CTRL+Z
   delay(1000);
    //gsm
//              Serial.println("ATD8977801788;"); // ATDxxxxxxxxxx;

       Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     Serial.println("AT+CMGS=\"+918977801788\"\r");
     Serial.println("vinathi attendance recorded");
     Serial.println((char)26);
     //delay(100);
  }
  else if (card_ID == Name4) {
    Name = "SAI NANDHINI";
    Roll = 421;
    BRANCH = "ECE D";
    j = 3;
    s = 3;
    //gsm
   mySerial.println("ATD8977801788;");
   mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
   delay(1000);  // Delay of 1000 milli seconds or 1 second

   mySerial.println("AT+CMGS=\"+918977801788\"\r"); // Replace x with mobile number

   delay(1000);

   delay(100);
   mySerial.println("sai nanadhini attendance recorded");
   mySerial.println((char)26);// ASCII code of CTRL+Z
   delay(1000);
    //gsm
//              Serial.println("ATD8977801788;"); // ATDxxxxxxxxxx;

       Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     Serial.println("AT+CMGS=\"+918977801788\"\r");
     Serial.println("sai nanadhini attendance recorded");
     Serial.println((char)26);
     //delay(100);
  }
  else if (card_ID == Name5) {
    Name = "MAHESH";
    Roll = 422;
    BRANCH = "ECE D";
    j = 4;
    s = 4;
    //gsm
   mySerial.println("ATD8977801788;");
   mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
   delay(1000);  // Delay of 1000 milli seconds or 1 second

   mySerial.println("AT+CMGS=\"+918977801788\"\r"); // Replace x with mobile number

   delay(1000);

   delay(100);
   mySerial.println("mahesh attendance recorded");
   mySerial.println((char)26);// ASCII code of CTRL+Z
   delay(1000);
    //gsm
//              Serial.println("ATD8977801788;"); // ATDxxxxxxxxxx;

       Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     Serial.println("AT+CMGS=\"+918977801788\"\r");
     Serial.println("mahesh attendance recorded");
     Serial.println((char)26);
     //delay(100);
  }
  else if (card_ID == Name6) {
    Name = "AAKASH CHANDRA";
    Roll = 423;
    BRANCH = "ECE D";
    j = 5;
    s = 5;
    //gsm
   mySerial.println("ATD8977801788;");
   mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
   delay(1000);  // Delay of 1000 milli seconds or 1 second

   mySerial.println("AT+CMGS=\"+918977801788\"\r"); // Replace x with mobile number

   delay(1000);

   delay(100);
   mySerial.println("aakash chandra attendance recorded");
   mySerial.println((char)26);// ASCII code of CTRL+Z
   delay(1000);
    //gsm
//              Serial.println("ATD8977801788;"); // ATDxxxxxxxxxx;

       Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     Serial.println("AT+CMGS=\"+918977801788\"\r");
     Serial.println("aakash chandra attendance recorded");
     Serial.println((char)26);
     //delay(100);
  }
  else if (card_ID == Name7) {
    Name = "AASHRITHA RAJ";
    Roll = 424;
    BRANCH = "ECE D";
    j = 6;
    s = 6;
    //gsm
   mySerial.println("ATD8977801788;");
   mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
   delay(1000);  // Delay of 1000 milli seconds or 1 second

   mySerial.println("AT+CMGS=\"+918977801788\"\r"); // Replace x with mobile number

   delay(1000);

   delay(100);
   mySerial.println("aashritha attendance recorded");
   mySerial.println((char)26);// ASCII code of CTRL+Z
   delay(1000);
    //gsm
//              Serial.println("ATD8977801788;"); // ATDxxxxxxxxxx;

       Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     Serial.println("AT+CMGS=\"+918977801788\"\r");
     Serial.println("aashritha attendance recorded");
     Serial.println((char)26);
     //delay(100);
  }
  else if (card_ID == Name8) {
    Name = "PAWAN KALYAN";
    Roll = 2;
    BRANCH = "ECE D";
    j = 7;
    s = 7;
    //gsm
   mySerial.println("ATD8977801788;");
   mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
   delay(1000);  // Delay of 1000 milli seconds or 1 second

   mySerial.println("AT+CMGS=\"+918977801788\"\r"); // Replace x with mobile number

   delay(1000);

   delay(100);
   mySerial.println("pawan kalyan attendance recorded");
   mySerial.println((char)26);// ASCII code of CTRL+Z
   delay(1000);
    //gsm
//              Serial.println("ATD8977801788;"); // ATDxxxxxxxxxx;

       Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     Serial.println("AT+CMGS=\"+918977801788\"\r");
     Serial.println("pawan kalyan attendance recorded");
     Serial.println((char)26);
     //delay(100);
  }
  else if (card_ID == Name9) {
    Name = "NANI";
    Roll = 3;
    BRANCH = "ECE D";
    j = 8;
    s = 8;
    //gsm
   mySerial.println("ATD8977801788;");
   mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
   delay(1000);  // Delay of 1000 milli seconds or 1 second

   mySerial.println("AT+CMGS=\"+918977801788\"\r"); // Replace x with mobile number

   delay(1000);

   delay(100);
   mySerial.println("nani attendance recorded");
   mySerial.println((char)26);// ASCII code of CTRL+Z
   delay(1000);
    //gsm
//              Serial.println("ATD8977801788;"); // ATDxxxxxxxxxx;

       Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     Serial.println("AT+CMGS=\"+918977801788\"\r");
     Serial.println("nani attendance recorded");
     Serial.println((char)26);
     //delay(100);
  }
  else if (card_ID == Name10) {
    Name = "YESH";
    Roll = 4;
    BRANCH = "ECE D";
    j = 9;
    s = 9;
    //gsm
   mySerial.println("ATD8977801788;");
   mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
   delay(1000);  // Delay of 1000 milli seconds or 1 second

   mySerial.println("AT+CMGS=\"+918977801788\"\r"); // Replace x with mobile number

   delay(1000);

   delay(100);
   mySerial.println("yesh attendance recorded");
   mySerial.println((char)26);// ASCII code of CTRL+Z
   delay(1000);
    //gsm
//              Serial.println("ATD8977801788;"); // ATDxxxxxxxxxx;

       Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     Serial.println("AT+CMGS=\"+918977801788\"\r");
     Serial.println("yesh attendance recorded");
     Serial.println((char)26);
     //delay(100);
  }
  else if (card_ID == Name11) {
    Name = "PRABHAS";
    Roll = 5;
    BRANCH = "ECE D";
    j = 10;
    s = 10;
    gsm
   mySerial.println("ATD8977801788;");
   mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
   delay(1000);  // Delay of 1000 milli seconds or 1 second

   mySerial.println("AT+CMGS=\"+918977801788\"\r"); // Replace x with mobile number

   delay(1000);

   delay(100);
   mySerial.println("prabhas attendance recorded");
   mySerial.println((char)26);// ASCII code of CTRL+Z
   delay(1000);
    //gsm
//              Serial.println("ATD8977801788;"); // ATDxxxxxxxxxx;

       Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     Serial.println("AT+CMGS=\"+918977801788\"\r");
     Serial.println("prabhas attendance recorded");
     Serial.println((char)26);
     //delay(100);
  }
  else if (card_ID == Name12) {
    Name = "NAGARJUNA";
    Roll = 6;
    BRANCH = "ECE D";
    j = 11;
    s = 11;
    //gsm
   mySerial.println("ATD8977801788;");
   mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
   delay(1000);  // Delay of 1000 milli seconds or 1 second

   mySerial.println("AT+CMGS=\"+918977801788\"\r"); // Replace x with mobile number

   delay(1000);

   delay(100);
   mySerial.println("nagarjuna attendance recorded");
   mySerial.println((char)26);// ASCII code of CTRL+Z
   delay(1000);
    //gsm
//              Serial.println("ATD8977801788;"); // ATDxxxxxxxxxx;

       Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     Serial.println("AT+CMGS=\"+918977801788\"\r");
     Serial.println("nagarjuna attendance recorded");
     Serial.println((char)26);
     //delay(100);
  }
  else {
    digitalWrite(GreenLed, LOW);
    digitalWrite(RedLed, HIGH);
    goto cont;
  }

  if (NumbCard[j] == 1 && statuss[s] == 0) {
    statuss[s] = 1;
    NumbCard[j] = 0;
    Serial.print("DATA,");
    Serial.print(ID);
    Serial.print(",");
    Serial.print("DATE");
    Serial.print(",");
    Serial.print(Name);
    Serial.print(",");
    Serial.print(Roll);
    Serial.print(",");
    Serial.print(BRANCH);
    Serial.print(",");
    Serial.print("");
    Serial.print(",");
    Serial.println("TIME");
    ID = ID + 1;
    digitalWrite(GreenLed, HIGH);
    digitalWrite(RedLed, LOW);
    digitalWrite(Buzzer, HIGH);
    delay(30);
    digitalWrite(Buzzer, LOW);
  }
  else if (NumbCard[j] == 0) {
    NumbCard[j] = 1;
    statuss[s] = 0;
    Serial.print("DATA,");
    Serial.print(ID);
    Serial.print(",");
    Serial.print("DATE");
    Serial.print(",");
    Serial.print(Name);
    Serial.print(",");
    Serial.print(Roll);
    Serial.print(",");
    Serial.print(BRANCH);
    Serial.print(",");
    Serial.print("TIME");
    Serial.print(",");
    Serial.println("");
    digitalWrite(GreenLed, HIGH);
    digitalWrite(RedLed, LOW);
    digitalWrite(Buzzer, HIGH);
    delay(30);
    digitalWrite(Buzzer, LOW);
    ID = ID + 1;
  }
  delay(1000);


cont:
  delay(1000);
  digitalWrite(GreenLed, LOW);
  digitalWrite(RedLed, LOW);
  card_ID = "";
}
