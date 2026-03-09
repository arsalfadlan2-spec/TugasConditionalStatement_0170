/* * Proyek: Kalkulator BMI Mahasiswa TI UMY
 * Pembuat: Arsal Fadlan
 * Deskripsi: Program C++ menggunakan Prosedur dan Fungsi
 */
#include <iostream>
#include <string>

using namespace std;

// Prosedur untuk memasukkan data nama, kelas, berat, dan tinggi
void masukanData(string &nama, string &kelas, float &berat, float &tinggi) {
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    // Di dalam prosedur masukanData, tambahkan:
if (tinggi <= 0) {
    cout << "Peringatan: Tinggi badan harus lebih dari 0!" << endl;
    tinggi = 1; // Nilai default agar program tidak crash
}
    
    // Menggunakan getline agar bisa menginput nama lengkap dengan spasi
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
    return berat / (tinggi * tinggi);
}

// Fungsi untuk menentukan kondisi/status berat badan
string cekStatus(float bmi) {
    if (bmi < 10.5) {
        return "Berat Badan Kurang";
    } else if (bmi < 25) {
        return "Berat Badan Normal";
    } else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    } else {
        return "Obesitas";
    }
}

int main() {
    string nama, kelas;
    float berat, tinggi, bmi;

    // Memanggil prosedur input
    masukanData(nama, kelas, berat, tinggi);

    // Memanggil fungsi hitung
    bmi = hitungBMI(berat, tinggi);

    // Menampilkan output sesuai format yang rapi
    cout << "\n--- Hasil Analisis Mahasiswa ---" << endl;
    cout << "Nama     : " << nama << endl;
    cout << "Kelas    : " << kelas << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << cekStatus(bmi) << endl;
    cout << "--------------------------------" << endl;

    return 0;
}