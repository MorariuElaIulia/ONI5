#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("5_Ordine.in");
ofstream fout("5_Ordine.out");
int main()
{
    //1.
    int n1 = 0;
    int n2 = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    //2.
    fin >> n1;

    //3.
    c1 = n1%10;
    c2 = (n1/10)%10;
    c3 = (n1/100)%10;

    if(c1>c2 && c2>c3){
        fout << c1 << "   " << c2 << "   " << c3;
    }
    if(c1>c3 && c3>c2){
        fout << c1 << "   " << c3 << "   " << c2;
    }
    if(c2>c1 && c1>c3){
        fout << c2 << "   " << c1 << "   " << c3;
    }
    if(c2>c3 && c3>c1){
        fout << c2 << "   " << c3 << "   " << c1;
    }
    if(c3>c2 && c2>c1){
        fout << c3 << "   " << c2 << "   " << c1;
    }
    if(c3>c1 && c1>c2){
        fout << c3 << "   " << c1 << "  " << c2;
    }







    return 0;
}
