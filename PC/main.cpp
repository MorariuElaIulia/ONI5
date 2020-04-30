#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("pc.in");
ofstream fout("pc.out");
int main()
{
    //1.
    int T = 0;
    int x = 0;
    int i = 1;
    int a = 0;
    int gaos = 0;

    //2.
    fin >> T;

    //3.
    while(i<=T){
        fin >> x;
        a = (x - 1)/2;
        gaos = x*(x+1)/2;
        if(a*x == x*x-gaos){
            fout << 1 << " ";
        }else{
            fout << 0 << " ";
        }
        i++;
    }
    return 0;
}
