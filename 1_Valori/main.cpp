#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Valori.in");
ofstream fout("Valori.out");
int main()
{
    //1.
    int n = 0;
    int p = n*n;
    int suma = 0;
    int produsul = 0;
    int c1 = 0;
    int c2 = 0;

    //2.
    fin >> n;


    cout << "n=" << n;
    //3.
    if(n<=15){
        fout << p;
    }
    c1 = n%10;
    c2 = (n/10)%10;
    suma = c1 + c2;
    produsul = c1 * c2;
    if(30 >= n && n >= 16){
        //DA
        fout << suma;
    }else{
        fout << produsul;
        }

    return 0;
}
