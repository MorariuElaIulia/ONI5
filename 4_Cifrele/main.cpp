#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Cifre.in");
ofstream fout("Cifre.out");
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
    if(c1 == c2 && c2 ==c3){
        fout << "Toate cifrele sunt egale.";
    }else{
        fout << "Cifrele nu sunt egale.";
        }

    return 0;
}
