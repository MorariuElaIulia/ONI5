#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("Cifre_crescatoare.in");
ofstream fout("Cifre_crescatoare.out");
int main()
{
    //1.
    int a = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    //2.
    fin >> a;

    //3.
    c1 = a%10;
    c2 = (a/10)%10;
    c3 = (a/100)%10;


    cout << c1 << " " << c2 << " " << c3;

    if(c3<c2){
        //DA.
        if(c2<c1){
            //DA.
            fout << "DA";
        }else{
        fout << "NU";
        }
    }else{
    fout << "NU";
    }
    return 0;
}
