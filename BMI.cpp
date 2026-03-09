#include <iostream>
#include <string>

using namespace std;

// Prosedur untuk memasukkan data berat dan tinggi
void masukanData(float &berat, float &tinggi) {
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

// Fungsi untuk menghitung nilai BMI
float hitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

// Fungsi untuk menentukan kondisi/status berat badan
string cekStatus(float bmi) {
    if (bmi < 18.5) {
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
    float berat, tinggi, bmi;

    // Memanggil prosedur input
    masukanData(berat, tinggi);

    // Memanggil fungsi hitung
    bmi = hitungBMI(berat, tinggi);

    // Menampilkan output sesuai format gambar
    cout << endl;
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << cekStatus(bmi) << endl;

    return 0;
}