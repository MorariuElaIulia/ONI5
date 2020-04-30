#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("comori1.in");
ofstream fout("comori1.out");
int main()
{
    //1.
    long long int n = 0;
    long long int i = 1;
    long long int b = 0;
    long long int pct = 0;
    long long int pred = 0;

    //2.
    fin >> n >> pred;

    //3.
    while(i<=n){
        //cout << i << endl;
        fin >> pct;
        if(pct>=pred){
            b++;
        }else{
            if(pct<pred){
                //cout << i << " ";
                fout << i + 1 << " ";
            }
        }
        pred = pct;
        i++;
    }

    if(b == n) fout << 0;
    return 0;
}
