#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("ani.in");
ofstream fout("ani.out");
int main()
{


    //Cerinta 1.
    //1.
    int p = 0;
    int p_pe_dos = 0;
    int c = 0;
    int c1 = 0;
    int c2 = 0;
    int n1 = 0;
    int n2 = 0;

    //2.
    fin >> c;
    fin >> p;

    //3.
    while(p > 0){
        c = p%10;
        p = p/10;
        p_pe_dos = p_pe_dos*10 + c;
                 }

    c1 = p_pe_dos%10;
    c2 = (p_pe_dos/10)%10;

    n1 = n1*10 + c1;
    n1 = n1*10 + c2;
    n1 = n1*10 + c1;

    n2 = n2*10 + c2;
    n2 = n2*10 + c1;
    n2 = n2*10 + c2;

    //Cerinta 2.

    //1.
    int n = 0;
    int k = 0;
    int i = 1;
    int numere = 0;

    //2.
    fin >> n >> k;

    //3.
    while(i <= n)
    {   //Pentru fiecare numar
        int j = 2;
        int dif = i-1;
        int num = 0;
        while(j <= dif)
        {   //Pentru fiecare divizor
            if(i % j == 0)
            {
                num = num + 1;
                cout << i << " ";
            }
            j = j+1;
        }

    if(numere == k){
        numere = numere + 1;
                }
    i = i + 1;
    }
    //Printarea rezultatelor
    if(c == 1)
    {
        if(c1>c2)
        {
        fout << n1;
        }else
        {
        fout << n2;
        }

    }else
    {
    fout<< numere;
    }






    return 0;
}
