#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("cifre.in");
ofstream fout("cifre.out");

int main()
{
    //1.
    int n = 0;
    int k = 0;
    int c = 0;
    int nrk = 0;
    int nrk2 = 0;
    int n2 = 0;
    int nr = 0;
    int nsp = 0;
    int nrr = 0;

    //2.
    fin >> n >> k;
    //cout << k;
    n2 = n;

    //3.
    cout << k << " " << n;
    if(k == n){
        fout << n << endl << n;
    }else{
        //cout << k;
        if(k == 0){
             while(n2>0){
                c = n2%10;
                //cout << "c = " << c << " ";
                if(c == k) nrk = nrk + 1;
                if(c != k) nr = nr*10 + c;
                n2 = n2/10;
            }

            while(nr>0){
                c = nr%10;
                nrr = nrr*10 + c;
                nr = nr/10;
            }
            nsp = 1;
            //cout << nr;
            fout << nrk << endl << nrr;
        }else{
            //cout << n2;
            while(n2>0){
                c = n2%10;
                //cout << "c = " << c << " " << "k = " << k << endl;
                if(c == k) nrk = nrk + 1;
                if(c != k) nr = nr*10 + c;
                n2 = n2/10;
            }
        }
        nrk2 = nrk;

        while(nr>0){
            c = nr%10;
            nrr = nrr*10 + c;
            nr = nr/10;
        }


    //4.
    if(nsp == 0){
        fout << nrk << endl;
        while(nrk2>0){
            fout << k;
            nrk2--;
        }
        fout << nrr;
    }
    }
    return 0;
}
