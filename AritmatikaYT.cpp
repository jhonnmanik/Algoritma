#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    double b = 4;

    double hasil;
    // penjumlahan
    hasil = a + b; 
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a-b;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a*b;
    cout << a << " x " << b << " = " << hasil << endl;

    // pembagian
    hasil = a/b;
    cout << a << " : " << b << " = " << hasil << endl;

    // urutan eksekusi
    hasil = (a + b) * 2 ;
    cout << "Hasil Adalah" << " = " << hasil << endl;

    cin.get();
    return 0;
}
