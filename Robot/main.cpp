#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("robot.in");
ofstream fout("robot.out");

long putere(long baza, int exponent){
    long p = 1;
    for(int i = 0; i<exponent; i++){
        p = p*baza;
    }
    return p;
}
int main()
{
    //1.
    long long int n = 0;
    long long int tip1 = 0;
    long long int tip2 = 0;
    long long int tip3 = 0;
    long long int suma1 = 0;
    long long int suma2 = 0;
    long long int suma3 = 0;
    long long int i = 1;
    long long int m = 0;

    //2.
    fin >> n;

    //3.
    while(i<=n){
        fin >> m;
        long long int lama1 = 1;
        long long int lama2 = 1;
        long long int nrc = 0;
        long long int c = 0;
        long long int ctip = 0;
        long long int m2 = m;
        long long int kg = 0;
        while(m2>0){
            c = m2%10;
            nrc+=1;
            m2/=10;
        }
        lama1 = putere(10,nrc);
        lama2 = lama1/10;
        ctip = (m%lama1)/lama2;
        //cout << "ctip = " << ctip << " ";
        kg = m%lama2;
        //cout << "kg = " << kg << endl;
        if(ctip == 1){
            tip1 = tip1 + 1;
            suma1 = suma1 + kg;
        }else if(ctip == 2){
            tip2 = tip2 + 1;
            suma2 = suma2 + kg;
        }else if(ctip == 3){
            tip3 = tip3 + 1;
            suma3 = suma3 + kg;
        }
        i++;
    }

    //4.
    fout << tip1 << " " << suma1 << endl;
    fout << tip2 << " " << suma2 << endl;
    fout << tip3 << " " << suma3 << endl;
    return 0;
}
