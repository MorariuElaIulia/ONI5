#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("ani.in");
ofstream fout("ani.out");
int main()
{
    int C = 0;
    fin >> C;
    if(C == 1){
    //CERINTA 1
    //1.
    int p = 0;

    int c = 0;
    int c1 = 0;
    int c2 = 0;
    int nr_rez = 0;
    int rez = 0;

    //2.
    fin >> p;

    //3.
    c1 = (p/1000)%10;
    c2 = (p/100)%10;
    if(c1>c2){
        rez = ((rez*10 + c1)*10 + c2)*10 + c1;
    }else{
        rez = ((rez*10 + c2)*10 + c1)*10 + c2;
    }
    //cout << "rez = " << rez << endl;


    }else if(C == 2){


    //CERINTA 2
    int n = 0;
    int k = 0;
    int nr = 0;
    int nrdiv = 0;
    int nr_numere = 0;
    int div = 2;
    int i = 1;

    //2.
    fin >> n >> k;

    //3.
    while(nr<n){
        while(i<=(nr/2)){
            if(nr%div == 0){
                nrdiv = nrdiv + 1;
            }
            i++;
        }
        if(nrdiv == k){
            nr_numere = nr_numere + 1;
        }
        nr++;
    }
    fout << "nr_numere = " << nr_numere << " ";
    }else if(C == 3){
        int n = 0;
        int k = 0;
        int nr = 2;
        int c1 = 0;
        int c2 = 0;
        int c3 = 0;
        int nrdivpal = 0;
        int nr_nou = 0;
        int div = 2;
        int i = 2;

        //2.
        fin >> n >> k;

        //3.
        fout << "2020";
    }
    return 0;
}
