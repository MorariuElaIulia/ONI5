#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Diferenta.in");
ofstream fout("Diferenta.out");
int main()
{
    //1.
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int maxi = 0;
    int mini = 1000;

    //2.
    fin >> a1 >> a2 >> a3;

    cout << a1 << a2 << a3;
    //3.
    if(a1>maxi){
        maxi = a1;
    }
    if(a2>maxi){
        maxi = a2;
    }
    if(a3>maxi){
        maxi = a3;
    }
    if(a1<mini){
        mini = a1;
    }
    if(a2<mini){
        mini = a2;
    }
    if(a3<mini){
        mini = a3;
    }

    //4.
    fout << "Diferenta este: " << (maxi-mini);
    return 0;
}
