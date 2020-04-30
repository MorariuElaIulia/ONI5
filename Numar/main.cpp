#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numar.in");
ofstream fout("numar.out");

long putere(long baza, int exponent){
    long long p = 1;
    for(int j = 1; j<exponent; j++){
        p *= baza;
    }
    return p;

}

int main()
{
    //1.
    long long int gres = 0;
    long long int i = 0;
    long long int c = 0;
    long long int nrc = 0;
    long long int lama1 = 0;
    long long int lama2 = 0;
    long long int suma = 0;

    //2.
    fin >> gres;
    //cout << gres << endl;
    long long int gres2 = gres;

    //3.
    while(gres2>0)
    {
        c = gres2%10;
        nrc = nrc + 1;
        gres2 = gres2/10;
    }
    i = nrc;

    while(i>0){
        lama1 = putere(10,i+1);
        lama2 = lama1/10;
        //cout << "lama1=" << lama1 << " lama2=" << lama2 << endl;
        c = (gres%lama1)/lama2;
        //cout << "c=" << c << endl;

        if(c%2 == 0) suma = suma + 4;
        if(c%2 == 1) suma = suma + 5;

        i--;
    }

    //4.
    fout << suma << endl;
    return 0;
}
