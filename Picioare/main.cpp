#include <iostream>

using namespace std;

int main()
{
    //1.
    int G = 0;
    int O = 0;
    int P = 0;
    int C = 0;
    int pg = 0;
    int po = 0;

    //2.
    cin >> G >> O;

    //3.
    C = G + O;
    pg = G*2;
    po = O*4;
    P = pg + po;

    //4.
    cout << C <<  "  " << P;
    return 0;
}
