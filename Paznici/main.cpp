#include <iostream>

using namespace std;

int main()
{
    //1.
    unsigned long long int n = 0;
    unsigned long long int rn = 0;
    unsigned long long int cn = 0;

    unsigned long long int m  = 0;
    unsigned long long int rm = 0;
    unsigned long long int cm = 0;

    unsigned long long int p = 0;
    unsigned long long int p4 = 0;
    unsigned long long int po = 0;
    unsigned long long int pv = 0;

    //2.
    cin >> n >> m;

    //3.
    cn = n/2;
    rn = n%2;

    cm = m/2;
    rm = m%2;

    p4 = cn*cm;
    p = p + p4;

    if(rn == 1 && rm == 1){
        p = p + 1;
    }

     pv = (n*rm)/2;
     po = (m*rn)/2;

     p = p + pv;
     p = p + po;

     //4.
     cout << p;
    return 0;
}
