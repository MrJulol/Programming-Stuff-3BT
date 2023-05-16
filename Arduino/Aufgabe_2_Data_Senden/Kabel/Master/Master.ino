int L1 = 2;                                         //Pins für Leitungen
int L2 = 3;
int L3 = 4;
int L4 = 5;
int L5 = 6;

char wort[] = "go, touch some grass! ";              //Wort eingeben, welches am anderen Arduino ausgegeben wird
int size = 1;                                        //Variabel size, um die Richtige Stelle des Strings auszulesen
int resize = 22;                                     // Anzahl der Buchstaben des Wortes (inc Leerzeichen)


void setup() {
  pinMode (2, OUTPUT);                               //PinModes für Led´s
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (7, INPUT);                                 //PinMode für Taster
}

void loop() {

  if (digitalRead(7) == HIGH) {                       //Ist der Taster gedrückt? Wenn ja,:
    digitalWrite(8, HIGH);                            //Synchronisierungskabel auf HIGH

    if (wort[size] == 'a') {                          //Wenn wort an der Stelle size a ist:
      digitalWrite(L1, HIGH);                         //Diese Kombination ausgeben
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 'b') {                          //Wenn wort an der Stelle size b ist:
      digitalWrite(L1, LOW);                          //Diese Kombination ausgeben
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);                          //Dies für jeden Buchstaben wiederholen
      digitalWrite(L4, LOW);                          //Dabei immer eine andere Kombination aus 
      digitalWrite(L5, HIGH);                         //HIGH und LOW verwenden
    }
    if (wort[size] == 'c') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 'd') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == 'e') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 'f') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, LOW);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == 'g') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 'h') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == 'i') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 'j') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == 'k') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, LOW);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 'l') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, LOW);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == 'm') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 'n') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, LOW);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == 'o') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 'p') {
      digitalWrite(L1, LOW);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == 'q') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 'r') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == 's') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 't') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == 'u') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, LOW);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 'v') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, LOW);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, LOW);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == 'w') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, LOW);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 'x') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, LOW);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == 'y') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == 'z') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == '.') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, LOW);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == ',') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, LOW);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == '!') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
    }
    if (wort[size] == '?') {
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, LOW);
      digitalWrite(L5, HIGH);
    }
    if (wort[size] == ' ') {              //Wenn wort an der Stelle size "(Leerzeichen)" ist:
      digitalWrite(L1, HIGH);             //Diese Kombination ausgeben
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
    }





    size = size + 1;                      //Variable size um 1 erhöhen um die nächste Stelle des wortes abzufragen
    if (size == resize) {                 //Falls Size gleich groß ist wie Resize (Anzahl der Buchstaben des Wortes)
      size = 0;                           //Dann wird Size wieder auf 0 gesetzt und das Programm startet von neuem
    }
    delay(500);                           //Ein delay von 500ms um Fehler zu vermeiden
  }                                       //Ende des Taster == HIGH
  if (digitalRead(7) == LOW) {            //Ist der Taster gedrückt? Wenn nein dann:
    digitalWrite(L1, LOW);                //Alle kabel auf LOW setzten und das Programm stoppt
    digitalWrite(L2, LOW);
    digitalWrite(L3, LOW);
    digitalWrite(L4, LOW);
    digitalWrite(L5, LOW);
  }

}                                         //Ende des Void-Loop
