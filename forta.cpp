#include <iostream>
#include <fstream>
#include <limits.h>

using namespace std;

ifstream fin("forta.in");
ofstream fout("forta.out");

int main()
{
    int c = 0; fin >> c;
    if(c == 1){
        //1.
        int n = 0;
        int i = 0;
        int d = 0;
        int nr = 0;
        int dmax = 0;
        int mini = INT_MAX;

        //2.
        fin >> n;
        int v[n];

        //3.
        while(i<n){
            fin >> nr;
            v[i] = nr;
            d = 0;
            for(int j = 1; j<=nr; j++){
                if(nr%j == 0) d = d + 1;
            }
            if(d>dmax){
                dmax = d;
            }
            i++;
        }

        for(int i = 0; i<n; i++){
            d = 0;
            for(int j = 1; j<=v[i]; j++){
                if(v[i]%j == 0) d = d + 1;
            }
            if(d == dmax && v[i]<mini){
                mini = v[i];
            }
        }

        //4.
        fout << mini;
    }
    return 0;
}
