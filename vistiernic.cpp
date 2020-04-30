#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("vistiernic.in");
ofstream fout("vistiernic.out");

int main()
{
    //1.
    long long int n = 0;
    long long int i = 0;
    long long int nr = 0;
    long long int nr5 = 0;
    long long int nr2 = 0;

    //2.
    fin >> n;
    //cout << "n = " << n << endl;

    //3.
    while(i<n){
        fin >> nr;
        int nrnou2 = nr;
        int nrnou5 = nr;
        //cout << "nr = " << nr << endl;
        while(nrnou5>0){
            if(nrnou5%5 == 0){
                nr5 = nr5 + 1;
                nrnou5 = nrnou5/5;
            }else{
                break;
            }
        }
        while(nrnou2>0){
            if(nrnou2%2 == 0){
                nr2 = nr2 + 1;
                nrnou2 = nrnou2/2;
            }else{
                break;
            }
        }
        cout << "nr2 = " << nr2 << " nr5 = " << nr5 << endl;
        i++;
    }

    //4.
    if(nr2>=nr5){
        fout << nr5 << endl;
    }else{
        fout << nr2 << endl;
    }
    return 0;
}
