#include <iostream>

using namespace std;

int main()
{
    //1.
    int F = 0;
    int FS = 0;
    int B = 0;
    int BS = 0;
    int n = 0;
    int suma = 0;

    //2.
    cin >> F >> B >> n;

    //3.
    FS = (F*3)*n;
    BS = (B*2)*n;
    suma = FS + BS;

    //4.
    cout << suma;
    return 0;
}
