//1. Berikan contoh deklarasi variabel. Berikan minimal 3 variabel dengan tipe data yang berbeda : int umur, char nama, float luas
//2. Berikan contoh minimal satu implementasi dari conditional statement :  if (nilai < rata-rata) {}
//3. Berikan contoh implementasi dari struct : struct mahasiswa
//4. Berikan contoh implementasi dari prosedur dan fungsi : void input, int main
//5. Berikan contoh implementasi dari looping : do while

#include <iostream>
using namespace std;

struct Kandidat {
    string nama;
    int nilaiMTK;
    int nilaiBInggris;
};

bool is_admitted(const Kandidat& Kandidat) {
    double avg = (Kandidat.nilaiMTK + Kandidat.nilaiBInggris) / 2.0;
    return avg >= 70 || Kandidat.nilaiMTK > 80;
}

int main() {
    const int MAX_CANDIDATES = 20;
    Kandidat candidates[MAX_CANDIDATES] = {
        {"Asroni", 85, 75},
        {"Lia", 90, 80},
        {"Joko", 60, 70},
    };

    cout << "Name\tStatus" << endl;
    for (int i = 0; i < MAX_CANDIDATES; i++) {
        Kandidat candidate = candidates[i];
        string status = is_admitted(candidate) ? "Lulus" : "Tidak Lulus";
        cout << candidate.nama << "\t" << status << endl;
    }

    cout << "Apa kamu ingin melanjutkan program ini? (y/n) ";
    char pilihan;
    cin >> pilihan;
    if (pilihan == 'y' || pilihan == 'Y') {
        main();
    }

    return 0;
}