# speech-to-tech-arduino
 contoh kode program untuk membuat speech to text dengan Arduino menggunakan modul EasyVR 3
# Langkah lengkap untuk membuat speech to text dengan Arduino menggunakan modul EasyVR 3:

Siapkan peralatan dan bahan yang dibutuhkan, antara lain:

1. Arduino board (saya menggunakan Arduino Uno)

2. Modul EasyVR 3

3. Kabel jumper

4. Software Arduino IDE (dapat diunduh dari https://www.arduino.cc/en/software)

5. Library EasyVR (dapat diunduh dari https://www.veear.eu/downloads/)

6. Komputer
## Pengerjaan 

1. Sambungkan modul EasyVR ke Arduino board dengan menggunakan kabel jumper. Sambungkan pin VCC modul ke pin 5V pada Arduino, pin GND modul ke pin GND pada Arduino, pin TX modul ke pin RX pada Arduino, dan pin RX modul ke pin TX pada Arduino.

2. Pasang library EasyVR pada Arduino IDE. Caranya adalah dengan membuka Arduino IDE, kemudian pilih menu Sketch > Include Library > Add .ZIP Library. Kemudian pilih file EasyVR.zip yang sudah diunduh sebelumnya.

3. Buat program Arduino menggunakan kode berikut <br>
https://github.com/fajarjulyana/speech-to-tech-arduino/blob/6a8283c29c37ac366364d35c5e447b27644856ea/src/code.cpp#L1-L20

4. Upload program ke Arduino board dengan menggunakan kabel USB.

6. Setelah program ter-upload, buka Serial Monitor pada Arduino IDE dengan mengklik menu Tools > Serial Monitor. Pilih baud rate 9600.

7. Cobalah untuk mengucapkan kata-kata yang sudah di-set threshold-nya di dalam program, dan periksa apakah hasilnya sudah terdeteksi dan ditampilkan di Serial Monitor.

Demikian langkah lengkap untuk membuat speech to text dengan Arduino menggunakan modul EasyVR 3. Semoga bermanfaat!
