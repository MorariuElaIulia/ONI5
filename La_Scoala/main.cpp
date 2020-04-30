#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int n = 0;
    long long int putere = 0;
    long long int k = 1;
    long long int i = 1;
    long long int j = 1;
    long long int y = 1;
    long long int x = 1;
    long long int elevi_premiati = 0;
    long long int epr = 0;
    long long int en = 0;
    long long int nl = 0;

    //2.
    cin >> n;

    //3.
    while(i<=n){
        k = i*i;
        if(k>putere && k<n) putere = k;
        i++;
    }

    while(x<=putere){
        if(x*x == putere) epr = x;
        x++;
    }

    elevi_premiati = n - putere;
    cout << "Numarul de elevi premiati: " << elevi_premiati << endl;
    cout << "Elevi nepriemiati: " << endl;

    en = n - elevi_premiati;
    nl = en/5;

    while(j<=nl && en>0){
        y = 1;
        while(y<=epr && en>0){
            cout << en << " ";
            //cout << "en=" << en << endl;
            en--;
            y++;
        }
        cout << endl;
        j++;
    }


    return 0;
}
