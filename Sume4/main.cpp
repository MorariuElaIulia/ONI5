#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sume4.in");
ofstream fout("sume4.out");

int main()
{
    //1.
    long long int n = 0;
    long long int i = 1;
    long long int nr = 0;
    long long int ns = 0;
    long long int cm = 0;
    long long int nd = 0;
    long long int suma_Ana = 0;
    long long int suma_Maria = 0;

    //2.
    fin >> n;

    //3.
    while(i<=n){
        fin >> nr;

        ns = (nr%100000)/1000;
        cm = (nr%1000)/100;
        nd = nr%100;
        //cout << "ns = " << ns << " cm = " << cm << " nd = " << nd << endl;

        if(ns == nd){
            suma_Ana = suma_Ana + ns;
            suma_Maria = suma_Maria + nd;
        }else{
            if(nd<ns){
                suma_Maria = suma_Maria + nd + cm;
                suma_Ana = suma_Ana + ns;
            }else{
                suma_Ana = suma_Ana + ns + cm;
                suma_Maria = suma_Maria + nd;
            }
        }
        //cout << suma_Ana << " " << suma_Maria << endl;
        i++;
    }

    //4.
    fout << suma_Ana << " " << suma_Maria;
    return 0;
}
