#include <iostream>

using namespace std;

int main()
{
    //1.
    int z = 0;

    int pt = 0;
    int t = 0;
    int ct = 0;

    int pb = 0;
    int b = 0;
    int cb = 0;

    int zile = 0;
    int excursie_reusaita = 0;

    //2.
    cin >> z >> pb >> b >> pt >> t;

    //3.
    while(true)
    {
        cb = cb + b;
        ct = ct + t;
        if(cb==ct) cout << cb;
         if(zile>z){
            excursie_reusaita = 1;
            break;
        }
        zile = zile + 1;

    }

    //4.
    if(excursie_reusaita == 0){
        cout << "-1";
    }

    return 0;
}
