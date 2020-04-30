#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere24.in");
ofstream fout("numere24.out");

long putere(int baza, int exponent){
    long p = 1;
    for(int i = 0; i<exponent; i++){
        p = p*baza;
    }
    return p;
}

int main()
{
    int c = 0; fin >> c;
    if(c == 1){
        //1.
        long long int n = 0;
        long long int rez = 0;

        //2.
        fin >> n;

        //3.
        rez = n*10 - 10;

        //4.
        fout << rez << endl;
    }else if(c == 2){
        //1.
        long long int x = 0;
        long long int nr = 0;
        long long int rez = 0;
        long long int c = 0;

        //2.
        fin >> x;

        //3.
        for(int x2 = x; x2>9; x2/=10){
            nr = x2/10;
            long long int palindrom = 0;
            if(nr%10 == 0){
                rez = 0;
            }else{
                for(int nr2 = nr; nr2>0; nr2/=10){
                    c = nr2%10;
                    palindrom = palindrom*10 + c;
                }

                if(palindrom == nr) rez = 1;
                if(palindrom != nr) rez = 2;
            }
            fout << rez << " ";
        }
    }else{
        //1.
        long long int k = 0;
        long long int c = 0;
        long long int nrc = 0;
        long long int nr = 0;
        long long int lama = 0;
        long long int numere = 0;

        //2.
        fin >> k;
        lama = putere(10, k - 1);
        lama = lama + 1;
        //cout << "lama = " << lama << endl;

        //3.
        while(true){
            nrc = 0;
            for(int lama2 = lama; lama2>0; lama2/=10){
                nrc = nrc + 1;
            }
            if(nrc == k + 1){
                break;
            }else{
                if(lama%10 == 0){
                }else{
                    long long int palindrom = 0;
                    for(int nr2 = lama; nr2>0; nr2/=10){
                        c = nr2%10;
                        palindrom = palindrom*10 + c;
                    }
                    if(palindrom == lama){
                        numere = numere + 1;
                    }else{
                        numere = numere + 2;
                        //cout << "palindrom = " << palindrom << " lama = " << lama << endl;
                    }
            }
            }
            lama = lama + 1;
        }

        //4.
        fout << numere << endl;
    }
    return 0;
}
