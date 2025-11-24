#include <iostream>

using namespace std;

int main()
{
    // Assignment operator
    int a = 10;

    cout << "Nilai awal dari a adalah: " << a << endl;          

    a += 3;

    cout << "Nilai a setelah di tambah adalah : " << a << endl;

     a -= 3;

    cout << "Nilai a setelah di kurang adalah : " << a << endl;

    a *= 3; 
    cout << "Nilai a setelah di kali adalah : " << a << endl;

    a /= 3;
    cout << "Nilai a setelah di bagi adalah : " << a << endl;

    return 0;
}