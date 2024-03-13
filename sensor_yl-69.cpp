// Deklarasi konstanta sensorPin yang merupakan pin analog yang digunakan untuk membaca data dari sensor kelembaban tanah
const int sensorPin = A1;

// Fungsi setup() akan dieksekusi sekali saat Arduino pertama kali dinyalakan
void setup() {
  // Memulai komunikasi serial dengan baud rate 9600 bits per second
  Serial.begin(9600);
}

// Fungsi loop() akan dieksekusi secara terus-menerus setelah fungsi setup() selesai dieksekusi
void loop() {
  // Variabel sensorValue untuk menyimpan nilai bacaan analog dari sensor kelembaban tanah
  int sensorValue = analogRead(sensorPin);

  // Mencetak pesan "Nilai kelembaban tanah: " ke serial monitor
  Serial.print("Nilai kelembaban tanah: ");
  // Mencetak nilai bacaan analog dari sensor kelembaban tanah ke serial monitor
  Serial.println(sensorValue);

  // Menunda eksekusi program selama 1000 milidetik (1 detik)
  delay(1000);
}