#include <iostream>
using namespace std;

int main()
{
        cout << "OPERASI OPERATOR LOGIKA \n";

        cout << "\n 1. Tabel Kebenaran Operator AND \n";
        cout << "--------------------------------" <<endl;
        cout << "1 && 1 = " << (1 && 1) <<endl;
        cout << "1 && 0 = " << (1 && 0) <<endl;
        cout << "0 && 1 = " << (0 && 1) <<endl;
        cout << "0 && 0 = " << (0 && 0) <<endl<<endl;

        cout << "\n 2. Tabel Kebenaran Operator OR \n";
        cout << "--------------------------------" <<endl;
        cout << "1 || 1 = " << (1 || 1) <<endl;
        cout << "1 || 0 = " << (1 || 0) <<endl;
        cout << "0 || 1 = " << (0 || 1) <<endl;
        cout << "0 || 0 = " << (0 || 0) <<endl<<endl;

        cout << "\n 3. Tabel Kebenaran Operator NOT \n";
        cout << "--------------------------------" <<endl;
        cout << "!1 = " << !1 <<endl;
        cout << "!0 = " << !0 <<endl;

        return 0;
}
