#include <iostream>

using namespace std;

int main()
{
    //1.
    int s = 0;
    int b = 0;
    int c =0;
    int p = 0;

    //2.
    cin >> b >> s;

    //3.
    c = s/b;
    p = b - (s%b);

    //4.
    cout << c << " " << p;
    return 0;
}
