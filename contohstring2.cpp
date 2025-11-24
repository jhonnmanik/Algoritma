#include <iostream>
using namespace std;

int main()
{
    string nama, nim, alamat; // deklarasi variabel bertipe string
    int usia; // deklarasi variabel bertipe integer

    cout << "Masukkan Data Berikut Ini" << endl;
    cout << "=========================" << endl;
    cout << "Nama   : "; getline(cin >> ws, nama);
    cout << "NIM    : "; cin >> nim;
    cout << "Usia   : "; cin >> usia;
    cout << "Alamat : "; getline(cin >> ws, alamat);

    cout << "\n\nTerima kasih telah memasukkan data.\n";
    cout << "Berikut Data Yang Telah Anda Input: \n\n";

    cout << "Data Yang Telah Diinput:" << endl;
    cout << "Nama   : " << nama << endl;
    cout << "NIM    : " << nim << endl;
    cout << "Usia   : " << usia << " tahun" << endl;
    cout << "Alamat : " << alamat << endl;

    return 0;
}
