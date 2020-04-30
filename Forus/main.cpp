#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("forus.in");
ofstream fout("forus.out");

long putere(int baza, int exponent){
    long p = 1;
    for(int i = 0; i<exponent; i++){
        p = p*baza;
    }
    return p;
}

int main()
{
    int ce = 0; fin >> ce;
    if(ce == 1){
        //1.
        int n = 0;
        int este_rau = 0;
        int nr = 0;
        int c = 0;
        int bune = 0;
        int i = 0;

        //2.
        fin >> n;

        //3.
        while(i<n){
            fin >> nr;
            este_rau = 0;
            for(int nr2 = nr; nr2>0; nr2/=10){
                c = nr2%10;
                if(c == 0){
                    este_rau = 1;
                }
            }
            if(este_rau == 0){
                bune = bune + 1;
            }
            i++;
        }

        //4.
        fout << bune << endl;

    }else{
        //1.
        int n = 0;
        int nr = 0;
        long int mini = 1000000000;
        long long int lama1 = 0;
        long long int lama2 = 0;
        int c1 = 0;

        //2.
        fin >> n;

        //3.
        for(int i = 0; i<n; i++){
            fin >> nr;
            int nrc = 0;
            int nrnou = nr;
            int c = 0;
            int d = 0;
            int dim = 10000000;

            for(int nr2 = nr; nr2>0; nr2/=10){
                nrc = nrc + 1;
            }
            lama1 = putere(10,nrc);
            lama2 = lama1/10;

            while(true){
                c = (nrnou%lama1)/lama2;
                nrnou = (nrnou%lama1)*10 + c;
                if(nr_nou == nr) break;
                for(int i = 1; i<nrnou/2; i++){
                    if(nrnou%i == 0) d = d + 1;
                    if(d<dmin) dmin = d;
                }
            }
        }

    }
    return 0;
}
