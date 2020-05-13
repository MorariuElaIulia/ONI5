#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("jumatate1.in");
ofstream fout("jumatate1.out");

long putere(int baza, int exponent){
    long p = 1;
    for(int i = 0; i<exponent; i++){
        p = p*baza;
    }
    return p;
}
int main()
{
    //1.
    long long int n = 0;
    long long int x = 0;
    long long int y = 0;
    long long int nrc = 0;
    unsigned long long int lama1 = 0;
    long long int lama2 = 0;
    long long int a = 0;
    long long int b = 0;
    long long int c = 0;
    long long int cy = 0;

    //2.
    fin >> n;
    cout << "n = " << n << endl;

    //3.
    for(long long int n2 = n; n2>0; n2/=10){
        nrc = nrc + 1;
    }
    cout << "nrc = " << nrc << endl;

    if(nrc%2 == 0){
        cy = nrc/2;
    }else{
        cy = nrc/2 + 1;
    }

    lama1 = putere(10, nrc);
    lama2 = putere(10, cy);
    cout << "lama1 = " << lama1 << " lama2 = " << lama2 << endl;

    x = n/lama2;
    y = n%lama2;
    cout << "x = " << x << " y = " << y << endl;

    a = x;
    b = y;
    c = 0;

    while(b>0){
        c = a%b;
        a = b;
        b = c;
    }

    //4.
    fout << a << endl;
    return 0;
}
