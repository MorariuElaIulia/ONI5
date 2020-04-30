#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere14.in");
ofstream fout("numere14.out");

long putere(int baza, int exponent){
    long p = 1;
    //cout << "p1 ini = " << p1 << endl;
    for(int i = 0; i<exponent; i++){
        p = p*baza;
        //cout << " p1 = " << p1 << " i = " << i << endl;
    }
    //cout << "baza = " << baza << " exp = " << exponent << " p1 = " << p1 << endl;
    return p;
}

int main()
{
    //1.
    long long int n = 0;
    long long int i = 1;
    long long int nr = 0;
    long long int lama1 = 0;
    long long int lama2 = 0;
    long long int c = 0;
    long long int nrc = 0;
    long long int sumac = 0;
    long long int jnrc = 0;

    //2.
    fin >> n;

    //3.
    while(i<=n){
        fin >> nr;
        long long int nr2 = nr;
        nrc = 0;
        lama1 = 1;
        lama2 = 1;
        while(nr2>0){
            c = nr2%10;
            nrc = nrc + 1;
            nr2/=10;
        }
        jnrc = nrc/2 + 1;
        //cout << "nrc = " << nrc << endl;
        //cout << "jnrc = " << jnrc << " nr = " << nr << endl;
        lama1 = putere(10,jnrc);
        //cout << "lama1 = " << lama1 << endl;
        lama2 = lama1/10;
        c = (nr%lama1)/lama2;
        //cout << "nr = " << nr << " c = " << c << endl;
        if(c%2 == 1) sumac = sumac + c;
        i++;
    }

    //4.
    fout << sumac << endl;
    return 0;
}
