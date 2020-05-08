#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("tablite.in");
ofstream fout("tablite.out");

int main()
{
    //1.
    int n = 0;
    int g = 0;
    int numere = 0;
    int grupa = 0;

    //2.
    fin >> n;

    //3.
    while(true){
        numere = numere + g;
        if(numere>=n){
            grupa = g;
            break;
        }
        g = g + 1;
    }

    //4.
    fout << grupa << endl;
    return 0;
}
