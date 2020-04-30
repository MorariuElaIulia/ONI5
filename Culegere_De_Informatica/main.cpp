#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("culeg.in");
ofstream fout("culeg.out");
int main()
{
    //1.
    int t = 0;
    int p = 0;
    int f = 0;
    int x = 0;
    int c = 0;
    int fi = 0;
    int ca = 0;
    int n1 = 0;
    int n2 = 0;
    int s = 0;
    int n = 0;
    int i = 10;

    //2.
    fin >> t >> p >> f >> x >> c;
    //cout << c;

    //3.
    ca = t/p;
    fi = f*ca;

    n1 = x/2;
    n2 = x/2 + 1;

    //Punctul 4
    n = p*c;
    if(n>9){
        s = s + 9;
    }else{
        s = s + n;
    }

    if(n>99){
        s = s + (9*20);
    }else{
        s = s + (n - 9)*2;
    }

    if(n>100){
        s = s + (n - 99)*3;
    }

    //4.
    fout << ca << endl;
    fout << fi << endl;
    fout << n2 << endl;
    fout << s  << endl;
    return 0;
}
