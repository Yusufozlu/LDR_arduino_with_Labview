#define led 8 //8.pinde LED tanımlıyoruz.
void setup() {
  pinMode(led, OUTPUT); //LED'in çıkış elemanı olduğunu belirtiyoruz.
  Serial.begin(9600); //9600 baundluk bir seri haberleşme başlatıyoruz.

}

void loop() {
  int isik = analogRead(A0); //ışık değişkenini A0 pinindeki ldr ile okuyoruz.
  Serial.println(isik); //okunan değeri seri iletişim ekranına yansıtıyoruz.
  delay(50);

  if (isik > 101) { //okunan ışık değeri 900den büyük ise
    digitalWrite(led, LOW); //led yanmasın
  }
  if (isik < 100) { //okunan ışık değeri 850den küçük ise
    digitalWrite(led, HIGH); //led yansın
  }
}
