#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Leaganul.in");
ofstream fout("Leaganul.out");
int main()
{
    //1.
    int a = 0;
    int b = 0;
    int suma = a+b;

    //2.
    fin>>a>>b;

    //3.
    if(suma<100){
        fout<<"Da, pot sa se dea in leagan";
    }else{
        fout<<"Nu, nu pot sa se dea in leagan";
        }
    return 0;
}
