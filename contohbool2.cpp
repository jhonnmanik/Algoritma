#include <iostream>

using namespace std;

int main()
{
    bool var1,var2,var3,var4,var5,var6;

    var1 = 100 > 50;
    var2 = 100 < 50;
    var3 = 'B' != 'b';
    var4 = "BAIK" == "baik";
    var5 = 5 != '5';
    var6 = 89 > 90;

    //menampilkan isi variabel
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << "var3 = " << var3 << endl;
    cout << "var4 = " << var4 << endl;
    cout << "var5 = " << var5 << endl;
    cout << "var6 = " << var6 << endl;

    return 0;
}