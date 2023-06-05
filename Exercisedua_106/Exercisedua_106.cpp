#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pengarang {
public:
    string nama;
    vector<string> buku;
    vector<string> penerbit;

    Pengarang(string _nama) {
        nama = _nama;
    }
};

class Penerbit {
public:
    string nama;
    vector<string> penulis;

    Penerbit(string _nama) {
        nama = _nama;
    }
};

int main() {
    // Membuat objek pengarang
    Pengarang joko("Joko");
    Pengarang lia("Lia");
    Pengarang giga("Giga");
    Pengarang asroni("Asroni");

    // Membuat objek penerbit
    Penerbit gamaPress("Gama Press");
    Penerbit intanPariwara("Intan Pariwara");

    // Mengisi data pengarang
    joko.buku = { "Fisika", "Algoritma" };
    lia.buku = { "Basisdata" };
    giga.buku = { "Matematika", "Multimedia 1" };
    asroni.buku = { "Dasar Pemrograman" };
    giga.penerbit = { "Game Press", "Intan Pariwira" };

    // Mengisi data penerbit
    gamaPress.penulis = { joko.nama, lia.nama, giga.nama };
    intanPariwara.penulis = { asroni.nama, giga.nama };



    // Daftar pengarang pada penerbit "Gama Press"
    cout << "Daftar pengarang pada penerbit \"Gama Press\":" << endl;
    for (const string& nama : gamaPress.penulis) {
        cout << nama << endl;
    }

    // Daftar pengarang pada penerbit "Intan Pariwara"
    cout << "Daftar pengarang pada penerbit \"Intan Pariwara\":" << endl;
    for (const string& nama : intanPariwara.penulis) {
        cout << nama << endl;
    }

    // Daftar penerbit yang diikuti "Giga"
    cout << "Daftar penerbit yang diikuti \"Giga\":" << endl;
    for (const string& nama : giga.penerbit) {
        cout << nama << endl;
    }

    // Daftar buku yang dikarang "Joko"
    cout << "Daftar buku yang dikarang \"Joko\":" << endl;
    for (const string& buku : joko.buku) {
        cout << buku << endl;
    }

    // Daftar buku yang dikarang "Lia"
    cout << "Daftar buku yang dikarang \"Lia\":" << endl;
    for (const string& buku : lia.buku) {
        cout << buku << endl;
    }

    // Daftar buku yang dikarang "Asroni"
    cout << "Daftar buku yang dikarang \"Asroni\":" << endl;
    for (const string& buku : asroni.buku) {
        cout << buku << endl;
    }

    // Daftar buku yang dikarang "Giga"
    cout << "Daftar buku yang dikarang \"Giga\":" << endl;
    for (const string& buku : giga.buku) {
        cout << buku << endl;
    }

    return 0;
}
