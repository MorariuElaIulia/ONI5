#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere_frumoase.in");
ofstream fout("numere_frumoase.out");
int main()
{
    //1.
    int n = 0;
    int nr = 0;
    int nrf = 0;
    int cp = 0;
    int cu = 0;
    int i = 1;

    //2.
    fin >>  n;

    //3.
    while(i <= n){
        fin >> nr;
    cp = (nr/100000)%10;
    cu = nr%10;
        if(cp==cu){
            nrf = nrf + 1;
                  }
    i = i + 1;
                 }

    //4.
    fout << nrf;


    return 0;
}
