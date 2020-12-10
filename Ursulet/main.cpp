#include <iostream>
#include <fstream>
#include <limits.h>

using namespace std;

ifstream fin("ursulet.in");
ofstream fout("ursulet.out");

int main()
{
    //1.
    int n = 0;
    int nr = 0;
    int pred = 0;
    int maxi = 0;
    int oprire = 0;
    int pozitiv = 0;
    int lungime = 0;
    int pornire = 0;
    int presecv = 0;
    int oboseala = 0;
    int opriremin = 0;
    int porniremin = 0;
    int mini = INT_MAX;

    //2.
    fin >> n;

    //3.
    for(int i = 0; i < n; i++){
        fin >> nr;
        //cout << "nr = " << nr << endl;
        cout << "i = " << i << endl;
        if(i == n - 1){
            cout << pornire << " " << oprire << endl;
            if(lungime < mini && oboseala >= maxi){
                //cout << lungime << " " << oboseala << endl;
                mini = lungime;
                lungime = 0;
                porniremin = pornire;
                opriremin = oprire;
                maxi = oboseala;
                oboseala = 0;
            }
            lungime = 0;
            oboseala = 0;
            presecv = 0;
        }else if(presecv == 0 && nr >= 0){
            presecv = 1;
            oboseala = oboseala + nr;
            pornire = i + 1;
            pozitiv = 1;
            lungime++;
            cout << "inceput = " << nr << endl;
        }else if(nr >= 0 && presecv == 1){
            oboseala += nr;
            lungime++;
        }else if(nr < 0 && presecv == 1){
            oprire = i;
            //cout << "sfarsit = " << nr << " i = " << i+1 << endl;
            cout << lungime << " " << oboseala << endl;
            if(lungime < mini && oboseala >= maxi){
                mini = lungime;
                lungime = 0;
                porniremin = pornire;
                opriremin = oprire;
                maxi = oboseala;
                oboseala = 0;
            }
            lungime = 0;
            oboseala = 0;
            presecv = 0;
        }
    }

    //4.
    cout << porniremin << " " << opriremin << endl;

    if(maxi > 0 && porniremin > 0 && opriremin > 0){
        fout << maxi << endl;
        fout << porniremin << " " << opriremin;
    }else if(pozitiv == 0){
        fout << "0" << endl << "0 0";
    }else if(pozitiv == 1 && porniremin == 0 && opriremin == 0){
        fout << maxi << endl << pornire << " " << oprire;
    }
    return 0;
}
