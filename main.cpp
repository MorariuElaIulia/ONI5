#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cifre.in");
ofstream fout("cifre.out");

int main()
{
    //1.
    int n = 0;
    long int nr = 1;
    int c1 = 0;
    int c2 = 0;
    int c3 = 2;

    //2.
    fin >> n;

    //3.
    for(int i = 0; i<n-1; i++){
        nr = 0;
        nr = c1*10 + c2;
        nr = nr*10 + c3;
        nr = nr*2;
        c3 = nr%10;
        c2 = (nr/10)%10;
        c1 = (nr/100)%10;
    }

    //4.
    fout << c1 << " " << c2 << " " << c3 << endl;
    return 0;
}
