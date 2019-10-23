#include <iostream>
using namespace std;

int main()
{
    char namaku [6] = { 'H', 'A', 'S', 'Y', 'A', '\0'};
    char namamu [6] = "TASYA";

    for (int O=0; O<6; O++)
    {
        cout << namaku [O];
    }
    cout <<endl;
    cout << namamu ;
    cout << endl <<endl;
    cout << "Jumlah Elemen NAMAKU : " << sizeof (namaku) <<endl;
    cout << "Jumlah Elemen NAMAMU : " << sizeof (namamu) <<endl <<endl;
    cout << endl <<endl <<endl;

    return 0;
}
