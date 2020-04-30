#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("tombola.in");
ifstream fin2("tombola.in");
ofstream fout("tombola.out");

int main()
{
    //1.
    int n = 0;
    int i = 1;
    int nr = 0;
    int maxi = 0;
    int numere = 0;
    int c2 = 0;

    //2.
    fin >> n;

    //3.
    while(i<=n){ ///Penru fiecare nr
        fin >> nr;
        //cout << "nr=" << nr << endl;

        int nrc = 0;
        int c1 = 0;
        int c = 0;
        int j = 1;
        int nr2 = nr;
        int putere1 = 1;
        int putere2 = 1;

        //cout << "nr2=" << nr2 << endl;
        while(nr2>0){ ///Pentru fiecare numar de cifre
            c = nr2%10;
            nrc = nrc + 1;
            nr2 = nr2/10;
        }
        //cout << "nrc=" << nrc << endl;

        while(j<=nrc){ ///Pentru  extragerea primei cifre
            putere1 = putere1*10;
            j++;
        }

        putere2 = putere1/10;
        c1 = (nr%putere1)/putere2;

        if(c1>maxi) maxi = c1;

        i++;
    }












    fin2 >> n;
    //cout << n;
    int x = 1;
    while(x<=n){
        fin2 >> nr;
        //cout << "nr=" << nr << endl;
        int nr3 = nr;
        int nrc2 = 0;
        int c3 = 0;
        int k = 1;
        int putere3 = 1;
        int putere4 = 1;


        while(nr3>0){ ///Pentru fiecare numar de cifre
            c3 = nr3%10;
            nrc2 = nrc2 + 1;
            nr3 = nr3/10;
        }
        //cout << "nrc2=" << nrc2 << endl;

        while(k<=nrc2){ ///Pentru  extragerea primei cifre
            putere3 = putere3*10;
            //cout << "putere3=" << putere3 << endl;
            k++;
        }

        putere4 = putere3/10;
        c2 = (nr%putere3)/putere4;
        //cout << "c2=" << c2 << endl;
        //cout << "putere3=" << putere3 << "  " << "putere4=" << putere4 << endl;

        if(c2 == maxi){
            numere = numere + 1;
            //cout << "numere=" << numere << endl;
        }
        x++;
    }

    //4.
    fout << numere << endl << maxi;
    return 0;
}
