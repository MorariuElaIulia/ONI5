#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("aur2.in");
int main()
{
    fout << 2 << endl << 100000 << " " << 10000 << endl;
    for(int i = 0;i < 20000;i++)
    {
        fout << 1 << " " << 2 << " " << 3 << " " << 4 << " " << 5 << " " << endl;
    }
    return 0;
}
