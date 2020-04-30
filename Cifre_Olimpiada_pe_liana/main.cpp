#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("cifre.in");
ofstream fout("cifre.out");
int main()
{
    //1.
    int n = 0;
    int n2 = 0;
    int r =0;
    int nrc = 0;
    int pred = 0;
    int c = 0;
    int i = 1;
    int j = 1;
    int c_taiem = 0;
    int nr_bun = 1;
    int rez = 1;
    int crez = 0;

    //2.
    fin >> n;
    n2 = n;
    int n3 = n;
    int n4 = n;
    int n5 = n;

    //3.
    n2 = n2/10;
    while(n2>0){
        c = n2%10;
        nrc = nrc + 1;
        n2 = n2/10;
    }
    int putere1 = 1;
    int putere2 = 1;

    while(i<=nrc){
        putere1 = putere1*10;
        i++;
    }

    while(j<nrc){

    }
    pred = n%10;
    while(n4>0){
        c_taiem = n4%10;
        if(c_taiem == pred) nr_bun = nr_bun*putere2 + n4/10;
        putere1 = putere1/10;
        putere2 = putere2/10;
        n4 = n4/10;
    }

    //cout << nr_bun;
    while(n5>0){
        crez = nr_bun%10;
        rez = rez*10 + crez;
        n5 = n5/10;
    }

    //4.
    fout << rez;
    return 0;
}
