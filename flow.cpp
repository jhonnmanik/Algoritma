#include <iostream>

using namespace std;

int main()
{
   for (int i = 0; i <= 10; i++){
    if (i == 5){
        continue; // continue itu untuk melewati perulangan
        //break; // break itu untuk menghentikan perulangan
    }
    cout << i << endl;
   }

   cout << "Akhirnya" << endl;

    cin.get();
    return 0;
}