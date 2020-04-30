#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //1.
    int n = 0;
    //2.
    cin >> n;

    //3.

    int i=1;
    while (i<=n){

        int k,c,nr,poz;
        cin >> k;
        nr = 100 + (k-1)/3;
        //cout << "nr=" <<nr <<endl;
        poz = 3-(k-3*(nr-100));
        //cout << "poz=" <<poz <<endl;

        c = (int)(nr/pow(10,poz))%10;
        cout << c << endl;
        i++;
    }


    return 0;
}
