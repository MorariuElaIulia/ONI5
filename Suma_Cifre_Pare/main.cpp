#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sumacifrepare.in");
ofstream fout("sumacifrepare.out");
int main()
{
    //1.
    int suma = 0;
    int nr = 0;
    int cif = 0;

    //2.
    fin >> nr;

    //3.
    while(nr>0){
        cif = nr%10;
        nr = nr/10;
    if(cif%2 == 0){
        suma = suma + cif;
                }
                  }
    //4.
    fout << suma;
    return 0;
}
