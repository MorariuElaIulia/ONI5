#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("suma.in");
ofstream fout("suma.out");
int main()
{
    //1.
    int suma = 0;
    int n = 0;
    int i = 1;
    int nr = 0;

    //2.
    fin >> n;

    //3.
    while(i <= n){
        fin >> nr;
        suma = suma + nr;
        i = i + 1;
    }

    //4.
    fout << suma;
    return 0;
}
