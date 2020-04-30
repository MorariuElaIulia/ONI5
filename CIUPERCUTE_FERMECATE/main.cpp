#include <iostream>

using namespace std;

int main()
{
    //1.
    int n = 32001;
    int i = 1;
    int j = 1;
    int k = 1;
    int nr_ciuperci = 0;
    int ci = 0;
    int ciuperci_bune = 0;
    int ciuperci_rele = 0;

    //2.
    cin >> nr_ciuperci;
    int nr = n;
    int v[n];

    //3.
    while(i<n){
        v[i] = 0;
        i++;
    }

    v[0] = 1;
    v[1] = 1;
    i = 2;
    n = nr;
    //cout << n;
    //cout << i << " " << n;
    while(i<=n/2){
        //cout << "###############" << endl;
        //cout << v[i] << endl;
        if(v[i] == 0){
            j = 2;
            while(j<=n/i){
                v[i*j] = 1;
                //cout << j << endl;
                j++;
            }
        }
        //cout << i << " " << n << endl;
        i = i + 1;
    }


    j = 1;
    while(j<=nr_ciuperci){
        cin >> ci;
        if(v[ci] == 0){
            ciuperci_bune = ciuperci_bune + 1;
            //cout << ciuperci_bune << " ";
        }else{
            ciuperci_rele = ciuperci_rele + 1;
            //cout << ciuperci_rele << " ";
        }
        j = j + 1;
    }

    //4.
    cout << ciuperci_bune << " ";
    cout << ciuperci_rele << endl;
    return 0;
}
