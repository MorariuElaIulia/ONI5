#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("joc.in");
ofstream fout("joc.out");

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
    long long int nr = 0;
    long long int c1 = 0;
    long long int c2 = 0;
    long long int lama1 = 0;
    long long int lama2 = 0;
    long long int nrc = 0;
    long long int des = 0;
    long long int nrm = 0;

    //2.
    fin >> n;

    //3.
    for(int i = 0; i<n; i++){
        fin >> nr;
        long long int cifre = 0;
        long long int rau = 0;
        nrc = 0;
        for(int nr2 = nr; nr2>0; nr2/=10){
            nrc = nrc + 1;
        }
        //cout << "nr = " << nr << " nrc = " << nrc << endl;
        lama1 = putere(10, nrc);
        lama2 = lama1/10;
        //cout << "lama1 = " << lama1 << "lama2 = " << lama2 << endl;
        c1 = (nr%lama1)/lama2;
        c2 = nr%10;
        if(c1<=c2){
            cifre = c1*10 + c2;
        }else{
            cifre = c2*10 + c1;
        }
        fout << cifre << " ";
        nrm = (nr%lama1)/10;
        for(int nmm = nrm; nmm>100; nmm/=10){
            long long int cp = 0;
            long long int cu = 0;
            cp = (nmm%100)/10;
            cu = nmm%10;
            if(cp>cu){
                //totul e ok:)
            }else{
                rau = 1;
                break;
            }
        }
        if(rau == 0){
            des = des + 1;
        }
    }

    //4.
    fout << endl << des << endl;
    return 0;
}
