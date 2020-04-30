#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("Inmultirea.in");
ofstream fout("Inmultirea.out");
int main()
{
    //1.
    int a = 0;
    int b = 0;
    int c = 0;

    //2.
    fin  >> a >> b >> c;

    //3.
    if(a>b && b>c){
            fout << (a*b+c);

    }
    if(a>c && c>b){
        fout << (a*c+b);
    }
    if(b>a && a>c){
        fout << (b*a+c);
    }
    if(b>c && c>a){
        fout << (b*c+a);
    }
    if(c>a && a>b){
        fout << (c*a+b);
    }
    if(c>b && b>a){
        fout << (c*b+a);
    }

    return 0;
}
