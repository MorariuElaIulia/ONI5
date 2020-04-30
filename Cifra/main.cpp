#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cifra.in");
ofstream fout("cifra.out");

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
    int cmin = 10;
    int cnou = 0;
    int nrc = 0;
    int lama1 = 0;
    int lama2 = 0;
    int c = 0;
    int nrnou = 0;
    int primul = 0;

    //2.
    fin >> n;
    nrnou = n;
    //cout << "n = " << n << endl;

    //3.
    for(int n2 = n; n2>0; n2/=10){
        c = n2%10;
        //cout << c << " ";
        if(c<cmin) cmin = c;
        //cout << "cmin = " << cmin << endl;
        nrc = nrc + 1;
    }

    fout << cmin << endl;

    while(true){
        //cout << "(C:";
        lama1 = putere(10, nrc);
        lama2 = lama1/10;
        for(int nr = nrnou; nr>0; nr = nr%lama1){
            cout << "nr = " << nr << endl;
            primul = primul + 1;
            c = (nr%lama1)/lama2;
            nrnou = 0;
            //cout << "c = " << c << endl;
            if(c!=cmin) nrnou = nrnou*10 + (c - cmin);
            if(primul == 1)cout << nrnou << endl;
            lama1/=10;
            lama2/=10;
            //cout << "nr = " << nr << endl;
            //cout << "lama1 = "  << lama1 << " lama2 = " << lama2 << endl;
        }
        if(nrnou/10 == 0){
            fout << nrnou << endl;
            break;
        }
    }
    return 0;
}
