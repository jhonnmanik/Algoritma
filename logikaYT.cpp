#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 3;

    bool hasil;

    // operator logika : not, and, or

    // not
    hasil = !(a == 3);
    cout << hasil << endl;

    // and = kedua nilai benar untuk menghasilkan true
    cout << "untuk and\n";
    hasil = (a == 3) and (b == 2); // true and true
    cout << hasil << endl;
    hasil = (a == 4) and (b == 2); // false and true
    cout << hasil << endl;
    hasil = (a == 3) && (b == 3);  // true and false
    cout << hasil << endl;
    hasil = (a == 4) && (b == 3);  // false and false
    cout << hasil << endl;

    // or
    cout << "untuk or\n";
    hasil = (a == 3) or (b == 2);  // true and true
    cout << hasil << endl;
    hasil = (a == 4) or (b == 2);  // false and true
    cout << hasil << endl;
    hasil = (a == 3) || (b == 3);  // true and false
    cout << hasil << endl;
    hasil = (a == 4) || (b == 3);  // false and false
    cout << hasil << endl;

    return 0;
}
