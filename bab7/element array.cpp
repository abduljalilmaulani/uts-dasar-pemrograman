#include <iostream>
using namespace std;

int main()
{
    int nama_array[10];
    cout <<  "Masukan nilai pada : " <<endl;
    for (int C=0; C<10; C++)
    {
        cout << "Elemen [" << C << "] = ";
        cin >> nama_array [C];
    }
    cout << "\n";

    cout << " Tampilkan nilai yang dimasukan : " <<endl;
    for (int D = 0; D<10; D++)
    {
        cout << " Nilai yang terdapat pada elemen ke ";
        cout << D+1 << " = " << nama_array [D] <<endl;
    }
    cout << "/n";

    return 0;
}
