#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("codcorect.in");
ofstream fout("codcorect.out");
int main()
{
    //1.
    int n = 0;

    int c = 0;
    int c1 = 0;
    int c2 = 0;

    int i = 1;

    int nr = 0;
    int nr2 = 0;

    unsigned long long int p3 = 1;
    unsigned long long int p4 = 1;


    //2.
    fin >> n;
    //cout << "n = " << n << endl;

    //3.
    while(i<=n){
        //cout << "i = " << i << endl;
        //cout << "###################" << endl;
        fin >> nr;
        nr2 = nr;
        c2 = nr%10;
        int nrc = 0;
        int nrm = 0;
        int j = 1;
        int k = 1;
        int nrn = 1;
        unsigned long long int p1 = 1;
        unsigned long long int p2 = 1;


        while(nr2>0){
            c = nr2%10;
            nrc = nrc + 1;
            nr2 = nr2/10;
        }

        while(j<=nrc){
            p1 = p1*10;
            j++;
        }

        while(k<nrc){
            p2 = p2*10;
            k++;
        }

        nrm = (nr%p2)/10;
        c1 = (nr%p1)/p2;
        cout << "numarul nustru = " << nr << " " << "numarul de cifre = " << nrc << endl;
        cout << " " << "puterea 1 = " << p1 << " " << "puterea 2 = " << p2 << endl;
        cout << " " << "prima cifra = " << c1 << " " << "ultima cifra = " << c2 << endl;

        if(nrc%2 == 0){
            fout << nr << " ";
        }else{
            if(c1>=c2){
                fout << nr << " ";
            }else{
                fout << c2 << nrm << c1 << " ";
            }
        }
        i++;
    }
    return 0;
}
