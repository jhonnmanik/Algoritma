#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Masukkan Angka : ";
    cin >> a;

    if (a == 5)
    {
        cout << "Ini adalah nilai 5" << endl;
    }
    else if (a == 3)
    {
        cout << "Ini adalah nilai 3" << endl;
    }
      else if (a == 1)
    {
        cout << "Ini adalah nilai 1" << endl;
    }
      else
    {
        cout << "Bukan 5,3,1" << endl;
    }
    cout << "selesai" << endl;

    cin.get();
    return 0;
}