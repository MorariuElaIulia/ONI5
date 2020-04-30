#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("alice.in");
ofstream fout("alice.out");

long putere(int baza, int exponent){
    long p = 1;
    for(int i = 0; i<exponent; i++){
        p = p*baza;
    }
    return p;
}

int main()
{
    //1.
    int n = 0;
    int k = 0;
    int i = 0;
    int maxpar = 0;
    int nr = 0;
    int nrnou = 0;
    int c = 0;
    int cmax = 0;
    int cnou = 0;
    int lama1 = 1;
    int lama2 = 1;

    //2.
    fin >> n >> k;

    //3.
    while(i<n){
        fin >> nr;
        if(nr%2 == 0){
            if(nr>maxpar){
                maxpar = nr;
            }
        }
        int nrc = 0;
        for(int nr2 = nr; nr2>0; nr2/=10){
            nrc = nrc + 1;
        }
        lama1 = putere(10, nrc);
        lama2 = lama1/10;

        for(int nr2 = nr; nr2>0; nr2%=lama1){
            c = (nr2%lama1)/lama2;
            if(c>cmax) cmax = c;
        }
    }
    return 0;
}
