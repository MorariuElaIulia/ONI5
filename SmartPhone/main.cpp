#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("smartphone.in");
ifstream fin2("smartphone.in");
ofstream fout("smartphone.out");
int main()
{
    //Cerinta 1.
    //1.
    unsigned long long int c = 0;
    unsigned long long int max = 0;
    unsigned long  long int n = 0;
    unsigned long long int i = 1;
    unsigned long long int num = 0;

    //2.
    fin >> c >> n;

    //3.
    while(i<=n){
        fin >> num;
     if(num>max){max = num;}
     i++;
    }
    i = 1;
    //Cerinta 2
    //1.
    unsigned long long int maxi = 0;
    unsigned long long int nu = 0;

    //2.
    fin2 >> c >> n;

    //3.
    while(i<=n){
        fin2 >> nu;
        if(nu>maxi && nu<max){maxi = nu;}
        i++;
    }
    //cout << "maxi=" << maxi;

    //Scriere rezultat

    if(c==1){
        fout << max;
    }else{
        fout << maxi;
        }

    return 0;
}
