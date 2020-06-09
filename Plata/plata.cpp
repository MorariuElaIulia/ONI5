#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("plata.in");
ofstream fout("plata.out");

int main()
{
    //1.
    long long int n = 0;
    long long int s = 0;
    long long int smin = 0;
    long long int nasturi = 0;
    long long int xd = 0;
    long long int yd = 0;
    int ultim = 0;
    int rau = 0;
    int max_pas = 0;

    //2.
    fin >> n >> s;
    //cout << "n = " << n << endl;
    //cout << "s = " << s << endl;
    long long int x[n];
    long long int y[n];

    //3.
    for(long long int k = 0; k<n; k++){
        fin >> xd >> yd;
        x[k] = xd;
        y[k] = yd;
    }

    int smini = 0;
    int smaxi = 0;
    for(int j = 0; j<n; j++){
        smini = smini + x[j];
        smaxi = smaxi + y[j];
    }
    if(smini>s || smaxi<s){
        rau = 1;
        fout << "imposibil";
    }

    if(rau == 0){
        for(long long int i = 0; i<n; i++){
            smin = 0;
            ultim = 0;
            nasturi = 0;
            if(i<n-1){
                for(int j = i+1; j<n; j++){
                    smin = smin + x[j];
                }
            }
            max_pas = s - smin;
            if(max_pas>y[i]){
                fout << y[i] << " ";
                s = s - y[i];
            }else{
                fout << max_pas << " ";
                s = s - max_pas;
            }

        }
    }
    return 0;
}
