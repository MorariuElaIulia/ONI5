#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("eticheta.in");
ofstream fout("eticheta.out");
int main()
{
    //1.
    int a = 0;
    int b = 0;

    int efort_1 = 0;
    int efort_2 = 0;

    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    int a1 = 0;
    int a2 = 0;
    int a3 = 0;

    //2.
    fin >> a >> b;


    cout << a << "  " << b << endl;
    //3.
    c3 = a%10;
    c2 = (a/10)%10;
    c1 = (a/100)%10;

    a3 = b%10;
    a2 = (b/10)%10;
    a1 = (b/100)%10;

    efort_1 = efort_1*10 + c2;
    efort_1 = efort_1*10 + c3;

    efort_2 = efort_2*10 + a2;
    efort_2 = efort_2*10 + a3;

    cout << efort_1 << " " << efort_2 << endl;

    if(c1 == 1){
        fout << b << " " << a << endl;
        fout << efort_2 << " " << efort_1 << endl;
    }else{
        fout << a << " " << b << endl;
        fout << efort_1 << " " << efort_2 << endl;
        }

    if(efort_1<efort_2){
        if(a1 == 1){
            fout << "Petrica";
        }else{
            fout << "Lizuca";
            }
    }else{
        if(c1 == 2){
            fout << "Lizuca";
        }else{
            fout << "Petrica";
        }
    }


    return 0;
}
