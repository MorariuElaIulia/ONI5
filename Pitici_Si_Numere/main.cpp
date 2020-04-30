#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("pitici.in");
ofstream fout("pitici.out");
int main()
{
    //1.
    long long int x = 0;
    long long int n = 0;

    long long int pred = 0;
    long long int rb = -1;
    long long int i = 1;
    long long int c = 0;
    long long int nr_rau = 0;
    long long int cb = 0;
    long long int cs = 0;

    //2.
    fin >> n >> pred;
    cout << "n = " << n << " " << "pred = " << pred << endl;

    //3.
    long long int x2 = 0;
    for(int i = 1; i <= n; i++){
        cout << "###########" << endl;

        fin >> x;
        x2 = x;
        int p1 = 1;
        long long int nrc = 0;
        int p2 = 1;
        long long int c1 = 0;
        long long int cz = 0;
        long long int amintrat = 0;

        cz = (pred%100)/10;
        cout << "pred = " << pred << endl;
        cout << "x = " << x << " " << "cifra zeci pred = " << cz << endl;
        int j = 1;
        int k = 1;

        while(x2>0){
            c = x2%10;
            nrc = nrc + 1;
            x2 = x2/10;
        }

        while(j<=nrc){
            p1 = p1*10;
            j++;
        }

        while(k<nrc){
            p2 = p2*10;
            k++;
        }
        cout << "p1 = " << p1 << " " << "p2 = " << p2 << endl;
        c1 = (x%p1)/p2;

        if(c1 == cz){
            amintrat = 1;
            rb = rb + 2;
            cb = cb + 1;
        }else{
            cs = cs + 1;
        }
        cout << "c1 = " << c1 << " " << "cz = " << cz << endl;
        cout << "cb = " << cb << " " << "cs = " << cs << endl;
        if(amintrat == 0){
            nr_rau = i;
        }
        cout << "nr_rau = " << nr_rau << endl;
        pred = x;
        i++;
    }

    //4.
    if(cb>=cs){
        fout << "CLASA BUNA" << endl << rb;
    }else{
        fout << "CLASA SLABA" << endl << (nr_rau - 1);
    }
    return 0;
}
