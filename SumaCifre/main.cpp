#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sumacifre.in");
ofstream fout("sumacifre.out");

int main()
{
    //1.
    int n = 0;
    int k = 0;
    int suma = 0;

    //2.
    fin >> n >> k;
    int n4 = n;

    //3.
    int i = 1;

    n = n4;
    //cout << i << k;
    while(i<=k){
        int nrc = 0;
        int n3=n;
        //cout << "n=" << n << " i=" << endl;
        for(int n2 = n; n2>0; n2 = n2/10){
            nrc = nrc + 1;
        }
        //cout << n << endl;
        int v[nrc];
        int j = nrc-1;

        while(j>=0){
            //cout << nrc << " " << j << endl;
            //cout << "#$#$#$#$#$#$#$$#$#$#$$#$#$#$#$#$##" << endl;
            //cout << n << endl;
            v[j] = n%10;
            //cout << j << " " << n << endl;
            //cout << n << " " << v[j] << endl;
            //cout << v[j] << endl;
            n = n/10;
            j--;
        }

        int nr = 0;

        //cout << "nrc=" << nrc << endl;
        if (n3>9){
            int k = 0;
            int k1 = 1;
            //cout << "k = " << k << " nrc-1 = " << nrc-1 << endl;
            while(k<nrc-1){
                int dif = 0;
                //cout << "k = " << k << " k1 = " << k1 << endl;
                if(v[k]>=v[k1]) dif = v[k] - v[k1];
                if(v[k1]>=v[k]) dif = v[k1] - v[k];
                //cout << "dif = " << dif << endl;
                nr = nr*10 + dif;
                k++;
                k1++;
            }

            n = nr;
        }else{
            n = n3;
        }
        suma = suma + n;
        i++;
    }

    //cout << "n=" << n;
    if(n/10 == 0){
        suma = n*k;
    }

    //4.
    fout << suma;
    return 0;
}
