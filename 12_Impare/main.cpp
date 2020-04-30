#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("Impare.in");
ofstream fout("Impare.out");
int main()
{
    //1.
    int n = 0;
    int c1 = 0;
    int c2 = 0;

    //2.
    fin >> n;

    //3.
    if(n%2==0){
    }else{
    n = n-1;
    }
    c1 = n-1;
    c2 = n-3;

    //4.
    fout << c1 << "  " << c2;


    return 0;
}
