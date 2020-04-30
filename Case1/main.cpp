#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("case1.in");
ofstream fout("case1.out");
int main()
{
    //1.
    long long int n = 0;
    long long int nr = 0;
    long long int i = 1;

    long long int grad1 = 0;
    long long int grad2 = 0;
    long long int grad3 = 0;

    long long int baieti = 0;
    long long int fete = 0;
    long long int copii = 0;

    long long int c1 = 0;
    long long int c2 = 0;
    long long int c3 = 0;
    long long int c4 = 0;

    //2.
    fin >> n;

    //3.
    while(i<=n){
        fin >> nr;
        c1 = (nr%10000)/1000;
        c2 = (nr%1000)/100;
        c3 = (nr%100)/10;
        c4 = nr%10;

        if(c1 == 1) grad1 = grad1 + 1;
        if(c1 == 2) grad2 = grad2 + 1;
        if(c1 == 3) grad3 = grad3 + 1;

        baieti = baieti + c2;
        fete = fete + c3;
        copii = copii + c4;

        i++;
    }

    //4.
    fout << grad1 << endl << grad2 << endl << grad3 << endl;
    fout << baieti << endl << fete << endl << copii << endl;
    return 0;
}
