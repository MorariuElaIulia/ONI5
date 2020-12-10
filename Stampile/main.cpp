#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    //1.
    int n = 0;
    int nr = 0;
    int poz = 0;
    int mini = INT_MAX;
    int maxi = 0;
    int ammax = 0;
    int c = 0;
    int v[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int l[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    //2.
    cin >> n;
    int raspunsc[n];

    //3.
    for(int i = 0; i < n; i++){
        raspunsc[i] = 0;
    }

    for(int i = 0; i < n; i++){
        cin >> nr;
        int stampile = 0;
        int cif[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        for(int n2 = nr; n2 > 0; n2 /= 10){
            c = n2 % 10;
            if(cif[c] == 0){
                stampile = stampile + 1;
                cif[c] = 1;
            }
            v[c] = v[c] + 1;
        }

        if(stampile == 2){
            raspunsc[i] = nr;
        }
    }

    for(int i = 0; i < 10; i++){
        if(v[i] < mini && v[i] != 0){
            poz = i;
            mini = v[i];
        }
    }

    cout << poz << endl;

    while(true){
        maxi = 0;
        poz = 0;
        ammax = 0;

        for(int i = 0; i < 10; i++){
            if(v[i] >= maxi){
                maxi = v[i];
                poz = i;
                ammax = 1;
            }
        }
        if(ammax == 0) break;
        cout << poz << " ";
        v[poz] = -1;
    }

    cout << endl;

    for(int i = 0; i < n; i++){
        if(raspunsc[i] > 0){
            cout << raspunsc[i] << " ";
        }
    }
    return 0;
}
