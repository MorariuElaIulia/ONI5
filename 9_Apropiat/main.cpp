#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("Apropiat.in");
ofstream fout("Apropiat.out");
int main()
{
    //1.
    int n =  0;
    int k = 0;
    int r = 0;
    int c = 0;
    int m = 0;

    //2.
    fin >> n >> k;


    cout << n << " "<< k;
    //3.
    r = n%k;
    c = n/k;
    m = n-n%k;

    //4.
    fout << m;






    ;return 0;
}
