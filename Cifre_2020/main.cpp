#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("cifre.in");
ofstream fout("cifre.out");
int main()
{
    //1.
    int n = 0;
    int putere = 1;
    int c = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    //2.
    fin >> n;

    //3.
    for(int i = 1; i<=n; i++){
        putere = putere%1000;
        putere = putere*2;
        //cout << putere << endl;
    }

    //4.
    c1 = (putere/100)%10;
    c2 = (putere/10)%10;
    c3 = putere%10;
    fout << c1 << " " << c2 << " " << c3;
    return 0;
}
