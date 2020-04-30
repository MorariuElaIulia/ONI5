#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Medii.in");
ofstream fout("Medii.out");

int main()
{
    //1.
    int m1 = 0;
    int m2 = 0;
    int m3 = 0;
    int m4 = 0;
    int m5 = 0;
    int media = 0;

    //2.
    fin>>m1>>m2>>m3>>m4>>m5;

    //3.
    media = (m1 + m2 + m3 + m4 + m5)/5;

    //4.
    fout<<media;

    return 0;
}
