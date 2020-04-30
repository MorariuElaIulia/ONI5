#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Palindrom_De_5_Cifre.in");
ofstream fout("Palindrom_De_5_Cifre.out");

int main()
{
    //1.
    int n1 = 0;
    int n2 = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    int c5 = 0;

    //2.
    fin>>n1;

    //3.
    c1 = n1%10;
    c2 = (n1/10)%10;
    c3 = (n1/100)%10;
    c4 = (n1/1000)%10;
    c5 = (n1/10000)%10;
    n2 = c1*10000 + c2*1000 + c3*100 + c4*10 + c5*1;

    if(n1==n2){
        //DA
        fout<<"Este un numar palindrom";
    }else{
         //NU
         fout<<"Nu este un numar palindrom";
         }
    return 0;
}
