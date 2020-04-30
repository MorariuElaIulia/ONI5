#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int n = 0;
    long long int min = 1000000;
    long long int i = 0;
    int nu_exista = 0;
    int numere = 0;

    //3.
    while (true){
        cin >> n;
        if(n==0){
            nu_exista = 1;
            break;
        }
        if(n>0){
            numere = 1;
            if(n<min){
             min = n;
            }
        }
    }

    //4.
    if (nu_exista==1){
        if(numere == 0){
            cout << "NU EXISTA";
        }else{
            cout << min;
        }
    }


    return 0;
}
