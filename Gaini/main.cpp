#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Gaini.in");
ofstream fout("Gaini.out");
int main()
{
    //1.
    int g1 = 0;
    int g2 = 0;
    int g3 = 0;
    int g4 = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int suma = 0;

    //2.
    fin >> A >> B >> C >> D;

    //3.
    suma = A*7 + B*7 + C*7 + D*7;

    //4.
    fout << "Bunica are " << suma << " oua.";

    return 0;
}
