#include <iostream>

using namespace std;

int main()
{
    //1.
    long int r = 0;
    long int g = 0;
    long int b = 0;

    long int R = 0;
    long int G = 0;
    long int B = 0;

    //2.
    cin >> r  >> g >> b;

    //3.
    R = 255-r;
    G = 255-g;
    B = 255-b;

    //4.
    cout << R << "  " << G << "  " << B;
    return 0;
}
