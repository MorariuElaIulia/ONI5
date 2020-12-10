#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("putere.in");
ofstream fout("putere.out");

int main()
{
    //1.
    int n = 0;
    int m = 0;
    int cn = 0;
    int nrc = 0;
    int cm = 0;
    int nc = 0;
    int mc = 0;
    int suma = 0;
    int prod1 = 1;

    //2.
    fin >> n >> m;

    //3.
    nc = n % 10;
    mc = m % 10;

    for(int i = n; i > 0; i /= 10) nrc++;

    for(int i = 0; i < mc; i++){
        prod1 = prod1 * nc;
    }

    fout << prod1 << endl;

    for(int i = 0; i < nrc; i++){
        cn = n % 10;
        cm = m % 10;
        prod1 = 1;

        for(int i = 0; i < cm; i++){
            prod1 = prod1 * cn;
        }

        suma = suma + prod1;

        n = n / 10;
        m = m / 10;
    }

    fout << suma;
    return 0;
}
