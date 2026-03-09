/* * Proyek: Kalkulator BMI Mahasiswa TI UMY
 * Pembuat: Arsal Fadlan
 * Deskripsi: Program C++ menggunakan Prosedur dan Fungsi
 */
 #include <iostream>
#include <string>
#include <ctime>

using namespace std;

// Prosedur untuk memasukkan data nama, kelas, berat, dan tinggi
void masukanData(string &nama, string &kelas, float &berat, float &tinggi) {
    cout << "\n--- Masukkan Data Mahasiswa ---" << endl;
    cout << "Masukkan Nama Lengkap      : ";
    getline(cin >> ws, nama); 
    cout << "Masukkan Kelas             : ";
    getline(cin >> ws, kelas);
    cout << "Masukkan berat badan (kg)  : ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m)  : ";
    cin >> tinggi;
}

// Fungsi untuk menghitung nilai BMI
float hitungBMI(float berat, float tinggi) {
    if (tinggi <= 0) return 0; 
    return berat / (tinggi * tinggi);
}

// Fungsi untuk menentukan kondisi/status berat badan
string cekStatus(float bmi) {
    if (bmi < 18.5) return "Berat Badan Kurang";
    else if (bmi < 25) return "Berat Badan Normal";
    else if (bmi < 30) return "Berat Badan Kelebihan";
    else return "Obesitas";
}

// Fungsi untuk memberikan saran kesehatan
string berikanSaran(string status) {
    if (status == "Berat Badan Kurang") return "Saran: Tingkatkan asupan protein dan kalori.";
    else if (status == "Berat Badan Normal") return "Saran: Pertahankan pola makan dan olahraga teratur.";
    else if (status == "Berat Badan Kelebihan") return "Saran: Kurangi konsumsi gula dan rutin berolahraga.";
    else return "Saran: Segera konsultasikan pola makan dengan ahli gizi.";
}

int main() {
    char pilihan;
    string nama, kelas;
    float berat, tinggi, bmi;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;

    do {
        // Memanggil prosedur input
        masukanData(nama, kelas, berat, tinggi);

        // Memanggil fungsi hitung
        bmi = hitungBMI(berat, tinggi);

        // Mengambil waktu saat ini
        time_t now = time(0);
        char* dt = ctime(&now);

        // Menampilkan output hasil akhir
        cout << "\n========================================" << endl;
        cout << "       HASIL ANALISIS MAHASISWA         " << endl;
        cout << "========================================" << endl;
        cout << "Waktu Pemeriksaan : " << dt; 
        cout << "Nama              : " << nama << endl;
        cout << "Kelas             : " << kelas << endl;
        cout << "BMI Anda          : " << bmi << endl;
        cout << "Status            : " << cekStatus(bmi) << endl;
        cout << berikanSaran(cekStatus(bmi)) << endl;
        cout << "========================================" << endl;

        // Fitur agar tidak perlu restart
        cout << "Apakah ingin menghitung lagi? (y/n): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "\nTerima kasih telah menggunakan program ini!" << endl;

    return 0;
}