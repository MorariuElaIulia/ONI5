#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("triviador.in");
ofstream fout("triviador.out");

int main()
{
    //1.
    long long int n = 0;
    long long int i = 1;
    long long int j = 0;
    long long int k = 0;
    long long int x = 0;
    long long int egal = 0;
    long long int index = 0;
    long long int maxi = 0;
    long long int maxim = 0;
    long long int e1 = 0;
    long long int e2 = 0;
    long long int e3 = 0;

    //2.
    fin >> n;
    //cout << n;
    long int v[n];

    //3.
    while(i<=n){
        long long int suma = 0;
        fin >> e1 >> e2 >> e3;
        //cout << "e1=" << e1 << " e2=" << e2 << " e3=" << e3 << endl;
        suma = e1 + e2 + e3;
        //cout << " suma=" << suma;
        v[i-1] = suma;
        //cout << " v[i]=" << v[i-1] << " i=" << i << endl;
        i++;
    }

    //cout << n;
    while(j<n){
        //cout << " v[j]=" << v[j] << endl;
        if(v[j]>=maxim){
            maxim = v[j];
            //cout << maxim << endl << endl;
            index = j;
        }
        j++;
    }
    //cout << index << endl;
    v[index] = -1;

    while(k<n){
        if(v[k]>=maxi && v[k]<maxim){
            maxi = v[k];
            //cout << maxim << endl;
        }
        k++;
    }

    //4.
    //cout << maxim << " " << maxi;
    if(maxi<=0){
        fout << "TOTI SUNT CASTIGATORI";
    }else{
        fout << maxim << " " << maxi;
    }
    return 0;
}
