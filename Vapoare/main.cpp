#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("vapoare.in");
ofstream fout("vapoare.out");
int main()
{
    //1.
    long long int x = 0;
    long long int y = 0;
    long long int z1 = 0;
    long long int z2 = 0;
    long long int b = 0;
    long long int c = 0;
    long long int a = 0;
    long long int i = 1;
    long long int zile = 0;

    //2.
    fin >> x >> y >> z1 >> z2;
    b = (x*7)*2 + z1;
    a = (y*7)*2 + z2;
    long long int t1 = a;
    long long int t2 = b;

    //3.
    while(b>0){
        c = a%b;
        a = b;
        b = c;
    }

    zile = (t1*t2)/a;

    //4.
    fout << zile;
    return 0;
}
