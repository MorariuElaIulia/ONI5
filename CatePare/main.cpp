#include <iostream>

using namespace std;

int main()
{
    //1.
    int K = 0;
    int nu_exista = 0;
    int numere = 0;
    int num = 0;

    //3.
    while (true){
        cin >> num;
        if(num == 0){
            nu_exista = 1;
            break;
        }else{
            numere = 1;
            }
        if(num%2==0){K = K + 1;}
    }

    //4.
    if(nu_exista == 1){
        if(numere == 0){
            cout << "NU EXISTA";
        }else{
            if(K==0){
                cout << "NU EXISTA";
            }else{
                cout << K;
                }
            }
    }
    return 0;
}
