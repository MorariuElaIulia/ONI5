#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("ograda.in");
ofstream fout("ograda.out");
int main()
{
    //CERINTA 1
    //1.
    unsigned long long int x = 0;
    unsigned long long int g = 0;
    unsigned long long int v = 0;
    unsigned long long int c = 0;
    unsigned long long int p = 0;

    //2.
    fin >> x >> c >> p;

    //3.
    v = (p-2*c)/2;
    g = c - v;

    //CERINTA 2
    //1.
    unsigned long long int divi = 0;
    unsigned long long int divp = 0;
    unsigned long long int i = 1;
    unsigned long long int j = 1;

    //3.
    while(i<=c){
        if(c%i == 0 && i%2 == 1) divi = divi + 1;
        i++;
    }

    while(j<=p){
        if(p%j == 0 && j%2 == 0) divp = divp + 1;
        j++;
    }

    //PRINTAREA REZULTATELOR
    if(x == 1){
        fout << g << " " << v << endl;
    }else{
        fout << divi << " " << divp << endl;
    }
    return 0;
}
