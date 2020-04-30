#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("xyz.in");
ofstream fout("xyz.out");
int main()
{
    //1.
    int x = 0;
    int y = 0;
    int z = 0;
    int nr = 0;
    int i = 1;

    //2.
    fin >> x >> y >> z;

    //3.
    nr = nr*10 + y;

    while(i<x){
        nr = nr*10 + z;
        i++;
    }

    //4.
    fout << nr;
    return 0;
}
