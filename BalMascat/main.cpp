
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("balmascat.in");
ofstream fout("balmascat.out");

int main()
{
    //1.
    long long int n = 0;
    long long int p = 0;
    long long int poz_cod = 0;
    long long int i = 1;
    long long int cuti_fara_papuci = 0;
    long long int c = 0;
    long long int c2 = 0;
    long long int j = 1;
    long long int cod = 0;

    //2.
    fin >> n >> p;
    //cout << "n = " << n << " p = " << p << endl;

    //3.
    if(n%p != 0) cuti_fara_papuci = 1;
    while(i<=n){
        if(p*i<=n) cuti_fara_papuci = cuti_fara_papuci + 1;
        i++;
    }
    //cout << "cuti_fara_papuci = " << cuti_fara_papuci << endl;
    c = cuti_fara_papuci%10;
    //cout << "c = " << c << endl;
    if(c == 9){
        c2 = c - 1;
    }else if(c<9){
        c2 = c + 1;
    }
    //cout << "c2 = " << c2 << endl;

    //cout << p*2 << endl;
    while(j<=p){
        cod = (cod*10 + c2)*10 + c;
        //cout << "cod = " << cod << endl;
        j++;
    }
    //cout << "cod = " << cod << endl;

    cod = cod/10;

    //4.
    fout << cod;
    return 0;
}

