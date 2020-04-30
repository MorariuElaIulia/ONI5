#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Nucul.in");
ofstream fout("Nucul.out");

int main()
{
    //1.
    int z = 0;
    int l = 0;
    int a = 0;
    int z2 = 4;
    int l2 = 1;
    int a2 = 2020;

    //2.
    fin>>z>>l>>a;

    //3.
    if(z==z2){
        if(l==l2){
            fout<<(a2-a);
        }
        }else{
            fout<<(a2-a);
            }
    return 0;
}
