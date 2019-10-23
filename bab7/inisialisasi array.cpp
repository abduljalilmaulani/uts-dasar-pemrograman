#include <iostream>
using namespace std;

int main()
{
    int A [5] = {5, 10, 15, 20, 25};
    cout << "Nilai Awal pada Elemen Array : " <<endl;
    cout << "A [0] = " << A [0] <<endl;
    cout << "A [1] = " << A [1] <<endl;
    cout << "A [2] = " << A [2] <<endl;
    cout << "A [3] = " << A [3] <<endl;
    cout << "A [4] = " << A [4] <<endl;

    //perubahan nilai elemen 1&2

    A [0] = 12;
    A [1] = 25;

    cout << "Setelah perubahan Array : " <<endl;
    cout << "A [0] = " << A [0] <<endl;
    cout << "A [1] = " << A [1] <<endl;
    cout << "A [2] = " << A [2] <<endl;
    cout << "A [3] = " << A [3] <<endl;
    cout << "A [4] = " << A [4] <<endl;

    return 0;
}
