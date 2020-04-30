#include <iostream>

using namespace std;

int main()
{
    //1.
    int a = 0;
    int b = 0;
    int c = 0;

    int m = 0;
    int n = 0;
    int p = 0;

    int m1 = 0;
    int m2 = 0;
    int m3 = 0;
    int suma = 0;

    //2.
    cin >> a >> b >> c >> m >> n >> p;

    //3.
    m1 = a*m;
    m2 = b*n;
    m3 = c*p;
    suma = m1 + m2 + m3;

    //4.
    cout << suma;
    return 0;
}
