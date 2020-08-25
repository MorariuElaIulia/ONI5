#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("impar.in");
ofstream fout("impar.out");

int main()
{
    //1.
    int n = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    int nr_nou = 0;
    int cif_par = 0;
    int nrc = 0;
    int j = 0;

    //2.
    fin >> n;

    //3.
    for(int nr2 = n; nr2>0; nr2/=10) nrc = nrc + 1;
    int v[nrc];

    if(n == 0) fout << 1;
    if(nrc == 1){
        c1 = n;
        v[0] = c1;
        if(v[0]%2 == 0) fout << v[0]+1 << endl;
        if(v[0]%2 == 1) fout << "CIFRE IIMPARE";
    }
    if(nrc == 2){
        c1 = n/10;
        c2 = n%10;
        v[0] = c1;
        v[1] = c2;
        if(v[1]%2 == 0){
            fout << v[0] << v[1]+1 << endl;
        }else if(v[0]%2 == 0){
            fout << v[0]+1 << v[1] << endl;
        }else if(v[0]%2 == 1 && v[1]%2 == 1){
            fout << "CIFRE IMPARE";
        }
    }
    if(nrc == 3){
        c1 = n/100;
        c2 = (n%100)/10;
        c3 = n%10;
        v[0] = c1;
        v[1] = c2;
        v[2] = c3;
        if(v[2]%2 == 0){
            fout << v[0] << v[1] << v[2]+1 << endl;
        }else if(v[1]%2 == 0){
            fout << v[0] << v[1]+1 << v[2] << endl;
        }else if(v[0]%2 == 0){
            fout << v[0]+1 << v[1] << v[2] << endl;
        }else if(v[0]%2 == 1 && v[1]%2 == 1 && v[2]%2 == 1){
            fout << "CIFRE IMPARE";
        }
    }
    if(nrc == 4){
        c1 = n/1000;
        c2 = (n%1000)/100;
        c3 = (n%100)/10;
        c4 = n%10;
        v[0] = c1;
        v[1] = c2;
        v[2] = c3;
        v[3] = c4;
        if(v[3]%2 == 0){
            fout << v[0] << v[1] << v[2] << v[3]+1 << endl;
        }else if(v[2]%2 == 0){
            fout << v[0] << v[1] << v[2]+1 << v[3] << endl;
        }else if(v[1]%2 == 0){
            fout << v[0] << v[1]+1 << v[2] << v[3] << endl;
        }else if(v[0]%2 == 0){
            fout << v[0]+1 << v[1] << v[2] << v[3] << endl;
        }else if(v[0]%2 == 1 && v[1]%2 == 1 && v[2]%2 == 1 && v[3]%2 == 1){
            fout << "CIFRE IMPARE";
        }
    }



    return 0;
}
