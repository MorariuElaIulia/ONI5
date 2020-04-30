#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sir.in");
ifstream fin2("sir.in");
ofstream fout("sir.out");
int main()
{
    //1.
    int nprim = 0;
    int suma = 0;
    int i = 1;
    int j = 1;
    int pred = 0;
    int nr = 300;
    int k = 2;
    int nrnum = 0;
    int n2 = 0;
    int ultimul_prim = 1;
    int v[nr];

    //2.
    fin >> pred;

    //3.
    while(true){
        fin2 >> n2;
        nrnum = nrnum + 1;
        if(fin2.eof()) break;
    }

    while(i<nr){
        v[i] = 0;
        i++;
    }

    v[0] = 1;
    v[1] = 1;
    i = 2;
    while(i<=nr/2){
        if(v[i] == 0){
            j = 2;
            while(j<=nr/i){
                v[i*j] = 1;
                j++;
            }
        }
        i = i + 1;
    }



    for(i = 2; i<nrnum; i++){
        int n = 0;
        fin >> n;
        cout << "pred="<<pred << " n=" <<n <<endl;
        if((pred%2 == 0 && n%2 == 0) || (pred%2 == 1 && n%2 == 1)){
                //gasim urm nr prim
                for (int j=0;j<3000;j++){
                    if (v[j]==0 && j>ultimul_prim){
                        suma = suma + j;
                        ultimul_prim = j;
                        break;
                    }
                }
                cout << " suma=" << suma << endl;
        }else{
                //gasim urm nr prim
                for (int j=0;j<3000;j++){
                    if (v[j]==0 && j>ultimul_prim){
                        suma = suma + j - 1;
                        ultimul_prim = j;
                        break;
                    }
                }
                cout << " suma(i-1)=" << suma << endl;

        }

        pred = n;
    }

    //4.
    fout << suma;
    return 0;
}
