#include <iostream>
#include <string.h>
using namespace std;

int main()
{
           cout << "Kelulusan Siswa \n \n";
           double Nilai_Ujian;
           cout << "Masukan Nilai Ujian = ";
           cin >> Nilai_Ujian;
           cout << endl;

           char Hasil_Ujian [12] = "Tidak Lulus";
           if (Nilai_Ujian >= 60)
            strcpy (Hasil_Ujian, "Lulus");

           cout << "Hasil Ujian : ";
           cout<< Hasil_Ujian;
           cout << endl <<endl <<endl;

           return 0;
}
