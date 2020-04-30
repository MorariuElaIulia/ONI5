#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("7_n_m.in");
ofstream fout("7_n_m.out");
int main()
{
    //1.
    int n = 0;
    int m = 0;
    int c1 = 0;
    int c2 = 0;
    int a1 = 0;
    int a2 = 0;

    //2.
    fin >> n >> m;

    //3.
    c1 = n%10;
    c2 = (n/10)%10;
    a1 = m%10;
    a2 = (m/10)%10;
    if((a1==c1 && a2==c2) || (a1==c2 && a2==c1)){
        //DA
        fout << "Numerele au doua cifre comune.";
    }else{
        if(a1==c1 || a1==c2 || a2==c1 || a2==c2){
            fout << "Numerele au o cifra in comun.";
        }else{
            fout << "Numerele nu au nici o cifra in comun.";
            }
        }
    return 0;
}
