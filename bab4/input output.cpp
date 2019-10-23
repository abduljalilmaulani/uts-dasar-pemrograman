#include <iostream>
using namespace std;

int main()
{
          double panjang,lebar,keliliing;
          cout << "Menghitung Keliling Persegi Panjang" <<endl;

          cout << "Panjang = ";
          cin >> panjang;

          cout << "Lebar = ";
          cin >> lebar ;

          keliliing = 2 * (panjang + lebar);
          cout << "Keliling = " << keliliing <<endl;

          return 0;
}
