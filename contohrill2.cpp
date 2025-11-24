#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double bil;

    bil = 1.2345678;

    cout << fixed;

    cout << setprecision(0) << bil << endl;
    cout << setprecision(1) << bil << endl;
    cout << setprecision(2) << bil << endl;
    cout << setprecision(3) << bil << endl;
    cout << setprecision(4) << bil << endl;
    cout << bil << endl;

    return 0;
}