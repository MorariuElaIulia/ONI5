#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("prize.in");
ofstream fout("prize.out");
int main()
{
    //1.
    unsigned long long unsigned long long int n = 0;
    unsigned long long int suma = 0;
    unsigned long long int i = 1;
    unsigned long long int nr = 0;

    //2.
    fin >> n;

    //3.
    while(i<=n)
    {
        fin >> nr;
        suma = suma + nr;
        //acout << "suma = " << suma << endl;
        i++;
    }
    suma = suma - (n-1);

    //4.
    fout << suma;
    return 0;
}
