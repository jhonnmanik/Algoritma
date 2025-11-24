#include <iostream>

using namespace std;

int main()
{
    string teks1 = "Halo Bro!";
    string teks2 = "Apa Kabarnya?";
    string teks3 = "Udah bisa ngetik 10 jari belum?";
    string teks4 = "ini Ku tambahi sendiri untuk coba coba aja";
    string gabungan;

    cout << "Panjang string teks 1 adalah " << teks1.length() <<endl;
    cout << "Panjang string teks 2 adalah " << teks2.size() <<endl;
    cout << "Panjang string teks 3 adalah " << teks3.size() <<endl;
    cout << "Panjang string teks 4 adalah " << teks4.length() <<endl;

    gabungan = teks1 + " " + teks2 + " " + teks3 + " " + teks4;

    cout << gabungan;

    return 0;
}