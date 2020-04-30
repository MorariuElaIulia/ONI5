#include <iostream>

using namespace std;

int main()
{
    //1.
    int x = 0;
    int y = 0;
    int suma = 0;
    int cif = 0;

    //2.
    cin >> x >> y;

    //3.
    suma = x + y;
    cif = suma%10;

    //4.
    cout << cif;

    return 0;
}
