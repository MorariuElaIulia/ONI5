#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;

ifstream fin("munti.in");
ofstream fout("munti.out");
int main()
{
    //1.
    int n = 0;
    int maxi = 0;
    int mini = 100;
    int nr = 0;
    int pozmax = 0;
    int pozmin = 0;
    int imax = 0;
    int imin = 0;
    int egal = 0;
    int maxie = 0;

    //2.
    fin >> n;
    int v[n];

    //3.
    for(int i = 0; i<n; i++){
        fin >> nr;
        v[i] = nr;
    }

    while(true){
        //cout << "C:";
        maxi = 0;
        mini = INT_MAX;
        for(int j = 0; j<n; j++){
            if(v[j]>maxi){
                maxi = v[j];
                pozmax = j;
            }
            if(v[j]<mini){
                mini = v[j];
                pozmin = j;
            }
        }
        //cout << "maxi = " << maxi << " mini = " << mini << endl;
        //cout << pozmax << " " << pozmin << endl;
        v[pozmax] = v[pozmax] - 1;
        v[pozmin] = v[pozmin] + 1;
        if(maxi - mini == 1 || maxi == mini) break;
        //cout << v[pozmax] << " " << v[pozmin] << endl;
    }

    for(int i = 0; i<n; i++){
        egal = 0;
        for(int j = 0; j<n; j++){
            if(v[j] == v[i]) egal = egal + 1;
        }
        //cout << egal << endl;
        if(egal>maxie) maxie = egal;
    }

    //4.
    fout << maxie << endl;
    return 0;
}
