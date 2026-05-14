# INEX WS-01 — IoT Weather Station Terintegrasi Blynk

**INEX WS-01** adalah proyek *Weather Station* berbasis **Internet of Things (IoT)** yang menggunakan **ESP32 DevKit C3** sebagai mikrokontroler utama. Sistem ini dirancang untuk memantau kondisi udara secara real-time, khususnya pada area publik berskala kecil.

Proyek ini menggunakan beberapa sensor, seperti **SHT31** untuk membaca suhu dan kelembaban, **MQ-135** untuk membaca kualitas udara/gas, serta **LDR** untuk membaca intensitas cahaya. Data yang diperoleh akan ditampilkan melalui **OLED Display** dan dapat dipantau secara online melalui **Blynk App**.

---

## 👥 Tim Pengembang

**Mikir Kids Team**

- Muchammad Achsanul Alfiansyah
- Muhamad Nur Khafidz

Organisasi: **INEX Corp**  
Lokasi: **Jombang**  
Tahun: **2025**

---

## 📌 Latar Belakang

Polusi udara merupakan salah satu permasalahan serius di kota-kota besar. Pertumbuhan industri, peningkatan jumlah kendaraan bermotor, serta emisi gas berbahaya seperti karbon monoksida, sulfur dioksida, dan gas polutan lainnya dapat menurunkan kualitas udara.

Kondisi udara yang buruk dapat berdampak pada kesehatan masyarakat, terutama bagi kelompok sensitif. Oleh karena itu, dibutuhkan sebuah instrumen monitoring kualitas udara yang dapat digunakan untuk memantau kondisi lingkungan secara real-time.

Dengan adanya sistem berbasis IoT, data kualitas udara dapat diakses secara online dan dapat menjadi bahan pertimbangan bagi masyarakat maupun pemerintah daerah dalam mengambil keputusan.

---

## 🎯 Tujuan Proyek

Tujuan dari proyek ini adalah membuat sebuah instrumen **Weather Station berbasis ESP32** yang mampu:

- Membaca suhu udara
- Membaca kelembaban udara
- Membaca kualitas udara menggunakan sensor MQ-135
- Membaca intensitas cahaya menggunakan LDR
- Menampilkan data pada OLED Display
- Mengirimkan data ke Blynk Cloud
- Memungkinkan monitoring secara real-time melalui smartphone

---

## ✅ Manfaat

Beberapa manfaat dari proyek ini antara lain:

- Membantu pengguna memantau kondisi udara secara real-time
- Memberikan informasi kualitas udara pada area tertentu
- Dapat digunakan di area publik berskala kecil
- Menjadi referensi awal untuk pengambilan kebijakan lingkungan
- Menjadi media pembelajaran implementasi IoT berbasis ESP32

---

## 👤 Sasaran Pengguna

Proyek ini ditujukan untuk:

- Masyarakat umum
- Pengguna area publik
- Pemerintah daerah
- Pelajar atau mahasiswa yang mempelajari IoT
- Pengembang sistem monitoring lingkungan

---

## ⚠️ Batasan Proyek

Proyek ini memiliki beberapa batasan:

- Sistem ditujukan untuk area publik berskala kecil
- Sensor MQ-135 hanya memberikan pembacaan umum terhadap beberapa jenis gas
- Sensor MQ-135 dapat mendeteksi gas seperti:
  - Karbon monoksida
  - Amonia
  - Nitrogen
  - Alkohol
  - Asap
- Sistem ini belum ditujukan sebagai alat ukur kualitas udara resmi/standar industri

---

## 🧩 Komponen yang Digunakan

| No | Komponen | Fungsi |
|---|---|---|
| 1 | ESP32 DevKit C3 | Mikrokontroler utama untuk membaca sensor, memproses data, dan mengirim data ke internet |
| 2 | Sensor SHT31 | Mengukur suhu dan kelembaban udara |
| 3 | Sensor MQ-135 | Mendeteksi kualitas udara/gas |
| 4 | Sensor LDR | Membaca intensitas cahaya |
| 5 | OLED Display 1.3 Inch | Menampilkan data sensor secara langsung pada perangkat |
| 6 | Kabel jumper | Menghubungkan antar komponen |
| 7 | PCB | Media rangkaian elektronik |
| 8 | Baterai Lithium | Sumber daya portable |
| 9 | Modul Charger TP4056 | Modul pengisian daya baterai lithium |
| 10 | Solder listrik | Alat untuk menyolder komponen |
| 11 | Timah solder | Bahan penyambung komponen elektronik |

---

## 🧠 Konsep yang Digunakan

### 1. Internet of Things

Internet of Things atau IoT adalah konsep penghubungan perangkat fisik ke internet agar perangkat dapat mengirim, menerima, dan memproses data secara otomatis.

Pada proyek ini, ESP32 digunakan sebagai perangkat IoT yang mengirimkan data sensor ke Blynk Cloud.

### 2. User Friendly Design

Sistem dirancang agar mudah digunakan oleh pengguna. Data dapat dilihat langsung melalui OLED Display maupun melalui aplikasi Blynk di smartphone.

### 3. Monitoring Kualitas Udara

Sistem membaca kondisi lingkungan sekitar menggunakan sensor suhu, kelembaban, intensitas cahaya, dan kualitas udara. Data tersebut kemudian digunakan sebagai informasi kondisi udara di area sekitar perangkat.

---

## ⚙️ Cara Kerja Sistem

Alur kerja sistem secara umum adalah sebagai berikut:

1. Sensor SHT31 membaca suhu dan kelembaban udara.
2. Sensor MQ-135 membaca kualitas udara/gas.
3. Sensor LDR membaca intensitas cahaya.
4. ESP32 menerima seluruh data dari sensor.
5. ESP32 memproses data sensor.
6. Data ditampilkan pada OLED Display.
7. ESP32 mengirimkan data ke Blynk Cloud melalui koneksi WiFi.
8. Pengguna dapat memantau data melalui Blynk App pada smartphone.

---

## 🏗️ Arsitektur Sistem

### Arsitektur Perangkat Lunak

```text
Sensor SHT31
Sensor MQ-135
Sensor LDR
     ↓
ESP32 DevKit C3
     ↓
Pemrosesan Data
     ↓
OLED Display + Blynk Cloud
     ↓
Blynk App pada Smartphone
