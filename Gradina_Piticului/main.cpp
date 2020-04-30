#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("pitic.in");
ofstream fout("pitic.out");

int main()
{
    //1.
    long long int n = 1000;
    long long int m = 0;
    long long int i = 0;
    long long int j = 2;
    long long int k = 1;
    long long int r = 1;
    long long int suma = 0;

    //2.
    fin >> m;
    //cout << m;
    int v[n];

    //3.
    //CIURUL LUI ERATOSTENE
    while(i<m){
        v[i] = 0;
        //cout << v[i] << " ";
        i++;
    }

    v[0] = 1;
    v[1] = 1;
    i = 2;
    while(i<=n){
        //cout << "i=" << i << endl;
        if(v[i] == 0){
            //cout << "C:";
            j = 2;
            //cout << i << endl;
            while(j<=n/i){
                //cout << "#########################################" << endl;
                v[i*j] = 1;
                j++;
            }
        }
        i = i + 1;
    }

    while(r<=m){
        if(v[r] == 0) fout << r << " ";
        if(v[r] == 1){
            k = 2;
            suma = 0;
            while(k<=r/2){
                if(v[k] == 0 && r%k == 0) suma = suma + k;
                k++;
            }
            fout << suma << " ";
        }
        r++;
    }
    return 0;
}
