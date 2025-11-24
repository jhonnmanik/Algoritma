#include <iostream>

using namespace std;

int main()
{
    float a,b, hasil;
    char aritmatika;

    cout << "Selamat datang di kalkulator sederhana : \n \n ";

    // Memasukkan input dari user
    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan operator +,-,*,: ";
    cin >> aritmatika;
    cout << "Masukkan angka kedua : ";
    cin >> b;

    cout << "\nHasilnya adalah : \n";
    cout << a << aritmatika << b;
    
    if (aritmatika == '+'){
        hasil = a + b;
        cout << " = " << hasil;
    }
    else  if (aritmatika == '-'){
        hasil = a - b;
        cout << " = " << hasil;
    }
    else  if (aritmatika == '*'){
        hasil = a * b;
        cout << " = " << hasil;
    }
    else  if (aritmatika == '/'){
        hasil = a / b;
        cout << " = " << hasil;
    }
    else {
        cout << "Operator yang anda masukkan salah!";
    }   

    cin.get();
    return 0;
}