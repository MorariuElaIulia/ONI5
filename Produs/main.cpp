#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("produs.in");
ofstream fout("produs.out");
int main()
{
    //1.
    long long int a = 0;
    long long int b = 0;
    long long int i = 0;
    long long int c = 0;
    long long int cif = 0;
    long long int numere = 0;

    //2.
    fin >> a >> b;
    long long int a2 = a;
    long long int b2 = b;

    //3.
    if(a == b){
        while(a2>0){
            cif = a2%10;
            if(c == 0){
                numere = numere + 1;
                break;
            }
            a2 = a2/10;
        }
        fout << numere;
    }else{

    while(a<=b){
        i = a;
        while(i>0){
            c = i%10;
            //cout << i << endl << c << endl;
            if(c == 0){
                numere = numere + 1;
                break;
            }
            i = i/10;
        }
        a++;
    }

    //4.
    if(numere == 0){
        fout << 0;
    }else{
        fout << numere;
    }
    }
    return 0;
}
