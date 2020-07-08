// define your LED pins here:
#define PIN_1 5
#define PIN_2 6
#define PIN_3 7
#define PIN_4 8
#define PIN_5 9
#define PIN_6 10
#define PIN_7 11
#define PIN_8 12

void setup() {
  pinMode(PIN_1, OUTPUT);
  pinMode(PIN_2, OUTPUT);
  pinMode(PIN_3, OUTPUT);
  pinMode(PIN_4, OUTPUT);
  pinMode(PIN_5, OUTPUT);
  pinMode(PIN_6, OUTPUT);
  pinMode(PIN_7, OUTPUT);
  pinMode(PIN_8, OUTPUT);
}

unsigned short int count = 0;

void loop() {

  if (count == 256) // > 11111111, reset the counter
    count = 0;
  digitalWrite(PIN_1, LOW);
  digitalWrite(PIN_2, LOW);
  digitalWrite(PIN_3, LOW);
  digitalWrite(PIN_4, LOW);
  digitalWrite(PIN_5, LOW);
  digitalWrite(PIN_6, LOW);
  digitalWrite(PIN_7, LOW);
  digitalWrite(PIN_8, LOW);

  if ((count % 2) > 0)
    digitalWrite(PIN_1, HIGH);

  if ((count % 4) > 1)
    digitalWrite(PIN_2, HIGH);

  if ((count % 8) > 3)
    digitalWrite(PIN_3, HIGH);

  if ((count % 16) > 7)
    digitalWrite(PIN_4, HIGH);

  if ((count % 32) > 15)
    digitalWrite(PIN_5, HIGH);

  if ((count % 64) > 31)
    digitalWrite(PIN_6, HIGH);

  if ((count % 128) > 63)
    digitalWrite(PIN_7, HIGH);

  if ((count % 256) > 127)
    digitalWrite(PIN_8, HIGH);

  delay(500);

  count++;
}
