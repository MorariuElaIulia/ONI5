#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("speciale.in");
ofstream fout("speciale.out");

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
    long long int rez = 0;
    int p = 0;
    int k = 0;
    int n = 0;
    int a = 0;
    int b = 0;
    int nrc = 0;
    int lama1 = 0;
    int lama2 = 0;
    int j = 0;
    int c = 0;
    long long int nr = 0;
    int rau = 0;
    int Rau = 0;
    int vpred = 0;
    int rez2 = 0;
    int f0 = 0;
    int exista_speranta = 0;
    int cpred = 0;

    //2.
    fin >> p >> k >> n >> a >> b;

    //3.
    if(p == 1){
        if(k == 1) fout << 9;
        if(k == 2) fout << 98;
        if(k == 3) fout << 987;
        if(k == 4) fout << 9876;
        if(k == 5) fout << 98765;
        if(k == 6) fout << 987654;
        if(k == 7) fout << 9876543;
        if(k == 8) fout << 98765432;
        if(k == 9) fout << 987654321;
    }

    if(p == 2){
        rau = 0;
        Rau = 0;
        for(int n2 = n; n2>0; n2/=10){
            nrc = nrc + 1;
        }
        int v[nrc];
        lama1 = putere(10,nrc);
        lama2 = lama1/10;
        for(int n2 = n; n2>0; n2%=lama1){
            c = (n2%lama1)/lama2;
            v[j] = c;
            j++;
            lama1 = lama1/10;
            lama2 = lama2/10;
        }
        for(int i = 0; i<nrc; i++){
            vpred = v[i];
            v[i] = -1;
            nr = 0;
            for(int j = 0; j<nrc; j++){
                if(j != i){
                    nr = nr*10 + v[j];
                }
            }
            v[i] = vpred;
            //cout << "nr = " << nr << endl;
            lama1 = putere(10,nrc-1);
            lama2 = lama1/10;
            rau = 0;
            cpred = 0;
            //cout << "cpred = " << cpred << endl;
            for(int nr2 = nr; nr2>0; nr2%=lama1){
                c = (nr2%lama1)/lama2;
                //cout << "nr2 = " << nr2 << endl;
                //cout << "c = " << c << endl;
                //cout << "lama1 = " << lama1 << " lama2 = " << lama2 << endl;
                if(cpred + 1 != c){
                    rau = 1;
                }
                lama1 = lama1/10;
                lama2 = lama2/10;
                cpred = c;
                //cout << "nr2%lama1 = " << nr2%lama1<< endl;
            }

            lama1 = putere(10,nrc);
            lama2 = lama1/10;
            Rau = 0;
            cpred = 10;
            //cout << "cpred = " << cpred << endl;
            for(int nr2 = nr; nr2>0; nr2%=lama1){
                c = (nr2%lama1)/lama2;
                //cout << "nr2 = " << nr2 << endl;
                //cout << "c = " << c << endl;
                //cout << "lama1 = " << lama1 << " lama2 = " << lama2 << endl;
                if(cpred - 1 != c){
                    Rau = 1;
                }
                lama1 = lama1/10;
                lama2 = lama2/10;
                cpred = c;
                //cout << "nr2%lama1 = " << nr2%lama1<< endl;
            }

            if(rau == 0 || Rau == 0){
                fout << nr;
                exista_speranta = 1;
            }
        }

        if(exista_speranta == 0){
            fout << 0;
        }
    }
    return 0;
}
