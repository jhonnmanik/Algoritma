#include <iostream>

using namespace std;

int main()
{
    float bilangan[] = {6.89, 0.123, -77.05};

    cout << "Isi Array Pertama = " << bilangan[0] << endl;
    cout << "Isi Array Kedua   = " << bilangan[1] << endl;
    cout << "Isi Array Ketiga  = " << bilangan[2] << endl;

    // mengubah isi array
    bilangan[1] = 8.888;
    bilangan[2] = 9.9988;

    cout << "Isi Array setelah diubah  :" << endl;
    cout << "Isi Array setelah pertama :" << bilangan[0] << endl;
    cout << "Isi Array setelah kedua   :" << bilangan[1] << endl;
    cout << "Isi Array setelah ketiga  :" << bilangan[2] << endl;

    return 0;

}