#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("veverite.in");
ofstream fout("veverite.out");
int main()
{
    //1.
    int v1 = 0;
    int v2 = 0;
    int suma = 0;
    int suma_prieten = 0;
    int profit = 0;

    //2.
    fin >> v1 >> v2;
    //cout << v1 << " " << v2;

    //3.
    suma = v1 + v2;
    //cout << suma;
    if(suma%3 == 0){
        suma_prieten = suma/3;
        profit = 0;
    }else{
        suma_prieten = suma/3;
        profit = suma%3;
    }

    //4.
    fout << suma_prieten << " " << profit;
    return 0;
}
