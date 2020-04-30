#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("triunghiuri.in");
ofstream fout("triunghiuri.out");

int main()
{
    //1.
    int n = 0;
    int lei = 0;
    int bani = 0;
    int m = 1;
    int i = 2;
    int suma = 1;

    //2.
    fin >> n;

    //3.
    while(i<n+1){
        m = m + i;
        suma = suma + m;
        i++;
    }
    //cout << suma << endl;
    suma = suma + n;
    //cout << suma << endl;
    lei = (suma*5)/100;
    bani = (suma*5)%100;

    //4.
    fout << lei << " " << bani << endl;
    return 0;
}
