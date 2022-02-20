/*
 * Utilizzo di potenziometro per pilotare l'accensione e spegnimento graduale di un led
 */

const int sensorPin = A0;                       // dichiara il pin del potenziometro (analogico)
const int ledPin = 3;                           // dichiara il pin del led (digitale)
int sensorValue = 0;                            // dichiara il valore del sensore
int ledValue = 0;                               // dichiara il valore del led

void setup() {
pinMode (ledPin, OUTPUT);                       // imposta il pin del led come output
}

void loop() {
sensorValue = analogRead(sensorPin);            // assegna il valore del potenziometro al sensore
ledValue = map(sensorValue, 0, 1023, 0, 255);   // converte mediante mappa il valore da 0-255 a 0-1023
analogWrite (ledPin, ledValue);                 // assegna al led il valore relativo
}
