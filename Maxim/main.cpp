#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int n = 0;
    long long int MAX = -1000000;
    long long int i = 0;

    int numere =  0;
    int nu_exista = 0;
    //3.
    while (true){
        cin >> n;
        if(n==0){
                nu_exista = 1;
                break;
        }else{
        numere = 1;
        }
        if(n>MAX){ MAX = n; }
    }
    //4.
    if (nu_exista==1){
        if(numere == 0){
            cout << "NU EXISTA";
        }else{
            cout << MAX;
        }
    }


    return 0;
}
k
