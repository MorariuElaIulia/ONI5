#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("aur2.in");
ofstream fout("aur2.out");

long putere(long baza, int exponent){
    long long p = 1;
    for(int j = 1; j<exponent; j++){
        p *= baza;
    }
    return p;
}
int main()
{
    long long int c; fin >> c;
   // cout << c << endl;
    if(c == 1){
        //1.
        long long int n = 0;
        long long int i = 0;
        long long int nrci = 0;

        //2.
        fin >> n;

        //3.
        while(i<n){
            int nr; fin >> nr;
            long long int nrc = 0;
            if(nr == 0){
                nrc = 1;
            }else{
                while(nr>0){
                    c = nr%10;
                    nrc = nrc + 1;
                    nr/=10;
                }
            }
            nrci = nrci + nrc;
            i++;
        }

        //4.
        fout << nrci;






    }else if(c == 2){


        //CERINTA 2
        //1.
        long long int n = 0;
        long long int k = 0;
        long long int j = 1;
        long long int pozk = 0;
        long long int c = 0;
        long long int suma_cifre = 0;
        long long int i = 1;
        long long int sir = 0;
        long long int nr = 0;
        long long int pred = 0;
        long long int lama1 = 1;
        long long int lama2 = 1;

        //2.
        fin >> n >> k >> pred;
        sir = pred;
        //cout << sir;
        while(pred>0){
            c = c%10;
            suma_cifre = suma_cifre + 1;
            pred/=10;
        }

        //3.
        while(i<n){
            //cout << "####$$$$$####" << endl;
            fin >> nr;
            //cout << "nr=" << nr << endl;
            int nr2 = nr;
            int nrc = 0;
            lama1 = 1;
            while(nr2>0){
                c = nr2%10;
                nrc = nrc + 1;
                nr2/=10;
            }
            suma_cifre = suma_cifre + nrc;
            //cout << "nrc=" << nrc << endl;

            while(nrc>0){
                lama1 = lama1*10;
                nrc--;
            }
            //cout << "lama1=" << lama1 << endl;
            //cout << "sir inainte = " << sir << endl;
            sir = sir*lama1 + nr;
            //cout << "nr2=" << nr2 << endl;
            //cout << "sir dupa = " << sir << endl;
            i++;
            pred = nr;
        }


        pozk = suma_cifre - k;
        while(j<=pozk){
            sir = sir/10;
            j++;
        }
        c = sir%10;

        //4.
        fout << c << endl;
    }
    return 0;
}
