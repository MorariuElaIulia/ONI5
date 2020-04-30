#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Ora.in");
ofstream fout("Ora.out");

int main()
{
    //1.
    int x = 0;
    int y = 0;
    int z = 0;

    //2.
    fin>>x>>y>>z;

    //3.
    if(y<x)
    {
        if(x<20)
        {
            fout<<"Poate sa mearga";
        }
    }
    else
    {
        fout<<"Nu poate sa mearga";
    }
    //4.



    return 0;
}
