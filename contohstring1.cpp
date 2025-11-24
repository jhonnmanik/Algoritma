#include <iostream>

using namespace std;

int main()
{
    string var1; //deklarasi variabel string
    string var2; //deklarasi variabel string dengan inisialisasi
    string var3("Pemrograman C++ di Unimed"); //deklarasi variabel string dengan inisialisasi
    string var4 = "ini langsung tanpa menggunakan var di bawah lagi,tapi langsung di samping string"; //deklarasi variabel string dengan inisialisasi

    var1 = "Mari \n Belajar \nBahasa \nC++ \ndi \n\"Unimed\"";
    var2 = "Jhon Cholosian Manik ganteng";

    cout << var1 << endl; //menampilkan isi variabel
    cout << var2 << endl; //menampilkan isi variabel
    cout << var3 << endl; //menampilkan isi variabel
    cout << var4 << endl; //menampilkan isi variabel

    return 0;
}