#include <iostream>

using namespace std;

int main()
{
    //1.
    int t1 = 0;
    int t2 = 0;
    int n = 0;
    int m = 0;
    int z = 0;

    int s1 = 0;
    int s2 = 0;
    int suma = 0;

    //2.
    cin >> t1 >> t2 >> n >> m >> z;

    //3.
    s1 = (n*t1)*z;
    s2 = (m*t2)*z;
    suma = s1 + s2;

    //4.
    cout << suma;
    return 0;
}
