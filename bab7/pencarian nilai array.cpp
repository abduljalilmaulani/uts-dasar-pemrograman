#include <iostream>
using namespace std;

int main()
{
     int A [10];
     int Nilai;
     cout << "Nama : Abdul Jalil Maulani" <<endl;
     cout << "NIM  : A2 1900002" << endl <<endl;
     cout << "Nilai pada : " <<endl <<endl <<endl;
     for (int C=0; C<10; C++) {
        cout << "Indexs [" << C << "] = ";
        cin >> A[C];
     }
     cout << endl;

     cout << "Nilai yang dicari adalah: ";
     cin>> Nilai;
     for (int D =0; D<10; D++)
     {
         if (A[D] == Nilai)
            {
                cout << "Nilai terdapat pada indexs ke " << D << endl;
                break;
            }
     }
     cout << "\n";
     return 0;
}
