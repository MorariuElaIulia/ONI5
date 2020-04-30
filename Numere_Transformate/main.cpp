#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("transformate.in");
ofstream fout("transformate.out");

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
    long long int n = 0;
    long long int i = 0;
    long long int nr = 0;
    long long int nrnou = 0;
    long long int nrc = 0;
    long long int lama1 = 0;
    long long int cifre = 0;
    long long int maxi = 0;
    long long int cresc = 0;
    long long int scad = 0;
    long long int egal = 0;

    //2.
    fin >> n;

    //3.
    while(i<n){
        fin >> nr;
        nrc = 0;
        for(int n2 = nr; n2>0; n2/=10){
            nrc = nrc + 1;
        }
        lama1 = putere(10, nrc-2);
        cifre = nr/lama1;
        nrnou = nr%lama1;
        nrnou = nrnou*100 + cifre;
        //cout << "nr = " << nr << " nrnou = " << nrnou << endl;
        if(nrnou>maxi) maxi = nrnou;
        if(nrnou>nr) cresc = cresc + 1;
        if(nrnou<nr) scad = scad + 1;
        if(nrnou == nr) egal = egal + 1;
        i++;
    }

    //4.
    fout << maxi << " " << cresc << " " << scad << " " << egal << endl;
    return 0;
}
