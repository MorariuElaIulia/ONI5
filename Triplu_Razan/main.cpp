#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("triplu.in");
ofstream fout("triplu.out");
int main()
{
    //1.
    long long int card1 = 0;
    long long int card2 = 0;
    long long int nrc1 = 0;
    long long int nrc2 = 0;
    long long int c = 0;
    long long int putere1 = 1;
    long long int putere2 = 1;
    long long int rez1 = 1;
    long long int rez2 = 1;
    unsigned long long int rezultat = 0;

    //2.
    fin >> card1 >> card2;
    long long int car1 = card1;
    long long int car2 = card2;

    //3.
    while(car1>0){
        c = car1%10;
        nrc1 = nrc1 + 1;
        car1 = car1/10;
    }

    while(car2>0){
        c = car2%10;
        nrc2 = nrc2 + 1;
        car2 = car2/10;
    }

    while(nrc1>0){
        putere1 = putere1*10;
        nrc1 = nrc1 - 1;
    }

    while(nrc2>0){
        putere2 = putere2*10;
        nrc2 = nrc2 - 1;
    }

    rez1 = card1;
    rez1 = rez1*putere2 + card2;
    cout << rez1 << endl;
    rez2 = card2;
    rez2 = rez2*putere1 + card1;
    cout << rez2 << endl;

    if(rez1>=rez2){
        rezultat = rez1*3;
    }else{
        rezultat = rez2*3;
    }

    //4.
    fout << rezultat;
    return 0;
}
