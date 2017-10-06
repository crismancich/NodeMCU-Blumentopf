// -----------------------------------------
// PROGRAMM ZUM MESSEN DER BODENFEUCHTIGKEIT
// C O D E W E E K      HAMBURG         2017 
// -----------------------------------------

// Datum: September 2017
// Autor(en): Boris Crismancich <boris.crismancich@erminas.de>, Jana Klemp <jana.klemp@erminas.de>
// Quelle und Dokumentation: https://github.com/crismancich/NodeMCU-Blumentopf

// Das Programm misst ob zwei Kabeln die in der Erde stecken,
// Strom fließt. Fließt der Strom, ist die erde feucht.
// Fließt er nicht, ist die Erde zu trocken und die LED des NodeMCU
// LED wird eingeschaltet.

// Dieser Teil bereitet einmalig alles vor
void setup() {
  // Bereitet den LED Pin vor
  pinMode(LED_BUILTIN, OUTPUT);

  // Bereitet den Strom Pin als Ausgang vor
  pinMode(D1, OUTPUT);

  // Öffnet die Serielle Konsole, damit man auf dem PC Statusmeldungen vom NodeMCU sehen kann
  Serial.begin(115200);
  Serial.println("\n Programm startet");
}

// Dieser Teil läuft danach in Endlosschleife
void loop() {
  // Strom auf D0 einschalten
  digitalWrite(D0, 1);
  
  // Auf A0 messen, ob strom ankommt
  int messwert = analogRead(A0);
  
  // Strom auf D0 ausschalten
  digitalWrite(D0, 0);

  // Messwert auf Konsole des PCs ausgeben
  Serial.println(messwert);

  // Wenn messwert kleiner oder gleich 800
  if(messwert <= 800){
    Serial.println("Zu trocken!");
    // Led einschalten (bei dieser LED ist 0 = an und 1 = aus. Komisch!)
    digitalWrite(LED_BUILTIN, 0);
  }
  // Sonst
  else {
    Serial.println("Alles prima!");
    // LED ausschalten
    digitalWrite(LED_BUILTIN, 1);  
  }
  // Eine sekunde (1000 Millisekunden) warten
  delay(1000);

}
