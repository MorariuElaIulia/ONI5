#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sumprod.in");
ofstream fout("sumprod.out");



int main()
{
    //1.
    int prod = 1;
    int suma = 0;

    int i = 1;
    int n = 0;
    int nr = 0;
    int num = 0;

    //2.
    fin >> n;

    //3.
    while(i <= n){
        fin >> nr;

        if(nr % 2 == 0){
            prod = prod*nr;
        }else{
            suma = suma + nr;
        }
        i = i + 1;
    }

    //4.
    fout << suma << endl;
    fout << prod << endl;

    return 0;
}
