#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("castel.in");
ofstream fout("castel.out");

int main()
{
    //1.
    long long int n = 0;
    long long int i = 0;
    long long int nr = 0;
    long long int k = 0;
    long long int apc = 0;
    long long int maxc = 0;
    long long int cheie = 0;
    long long int ch = 0;
    long long int j = 1;
    long long int c = 0;

    //2.
    fin >> n;
    long long int v[n];

    //3.
    while(i<n){
        fin >> nr;
        //cout << "nr = " << nr << endl;
        v[i] = nr;
        //cout << "v[i] = " << v[i] << endl;
        i++;
    }
    fin >> k;

    for(int j = 0; j < k; j++){ //cout << "######################" << endl;
        fin >> ch;
        //cout << "ch = " << ch << endl;
        apc = 0;
        for(int i = 0; i < n; i++){
            //cout << "i = " << i << endl;
            int nr2 = v[i];
            while(nr2>0){
                c = nr2%10;
                //cout << "v[i] = " << v[i] << endl;
                //cout << c << " ";
                if(c == ch){
                    apc = apc + 1;
                }
                nr2/=10;
            }
        }
        //cout << "apc = " << apc << endl;
        if(apc>maxc){
            maxc = apc;
            cheie = ch;
        }
    }

    //4.
    fout << cheie << " " << maxc << endl;
    return 0;
}
