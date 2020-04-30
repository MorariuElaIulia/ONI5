#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cifmaxmin.in");
ofstream fout("cifmaxmin.out");

int main()
{
    //1.
    long long int n = 0;
    long long int i = 1;
    long long int c = 0;
    long long int nr = 0;
    long long int maxi = 0;
    long long int mini = 100;
    long long int petrica = 0;
    long long int ionut = 0;
    long long int cartonase_petrica = 0;
    long long int cartonase_ionut = 0;

    //2.
    fin >> n;

    //3.
    while(i<=n){
        fin >> nr;
        long long int cmin = 10;
        long long int cmax = 0;
        long long int np = 0;
        long long int ni = 0;
        if(nr%2 == 0){
            cartonase_petrica = cartonase_petrica + 1;
            while(nr>0){
                c = nr%10;
                if(c>=cmax) cmax = c;
                if(c<=cmin) cmin = c;
                //cout << "cmax = " << cmax << " cmin = " << cmin << endl;
                nr/=10;
            }
            np = (np*10 + cmax)*10 + cmin;
            //cout << "numarul format de petrica este " << np << endl;
            if(np>maxi) maxi = np;
        }else{
            cartonase_ionut = cartonase_ionut + 1;
            while(nr>0){
                c = nr%10;
                //cout << "c = " << c << endl;
                if(c>=cmax) cmax = c;
                if(c<=cmin) cmin = c;
                //cout << "cmax = " << cmax << " cmin = " << cmin << endl;
                nr/=10;
            }
            ni = (ni*10 + cmin)*10 + cmax;
            //cout << "numarul format de ionut este " << ni << endl;
            if(ni<mini) mini = ni;
        }
        i++;
    }

    //4.
    fout << maxi << " " << cartonase_petrica << " " << mini << " " << cartonase_ionut;
    return 0;
}
