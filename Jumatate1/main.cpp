#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("jumatate1.in");
ofstream fout("jumatate1.out");
int main()
{
    //1.
    long long int n = 0;
    long long int n2 = 0;
    long long int x = 0;
    long long int y = 0;
    long long int ci = 0;
    long long int nrc = 0;
    long long int cifx = 0;
    long long int cify = 0;
    long long int nrx = 1;
    long long int nry = 1;

    //2.
    fin >> n;
    n2 = n;

    //3.
    while(n2>0){
        ci = n2%10;
        nrc = nrc + 1;
        n2 = n2/10;
    }

    cifx = nrc/2;
    cify = nrc/2 + 1;

    for(long long int nrc2 = nrc; nrc2>0; nrc2--){
        nrx = nrx*10;
        cifx = cifx - 1;
    }

    while(cify>0){
        nry = nry*10;
        cify = cify - 1;
    }

    x = (n%nrx)/nry;
    //cout << x;
    y = n%nry;

    long long int a = y;
    long long int b = x;
    long long int c = 0;

    while(b>0){
        c = a%b;
        a = b;
        b = c;
    }

    //4.
    fout << a;
    return 0;
}
