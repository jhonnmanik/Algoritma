#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int jari2;
    float luas;
    
    cout << "Program Menghitung Luas Lingkaran\n";
    cout << "================================\n\n";
    cout << "Input jari jari (cm) = "; cin >> jari2;

    luas = 3.14 * jari2 * jari2;

    cout << fixed;
    cout << "luas Lingkaran tersebut adalah = " << setprecision(2) << luas << " cm^2" << endl;

    return 0;
}