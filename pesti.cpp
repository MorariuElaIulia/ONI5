#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("pesti.in");
ofstream fout("pesti.out");

int main()
{
    //1.
    long long int n = 0;
    long long int i = 0;
    long long int gmax = 0;
    long long int z = 0;
    char l = 0;
    long long int in = 0;
    long long int gzi = 0;
    long long int g = 0;
    long long int s = 1;
    long long int zile = 0;
    long long int bune = 0;
    int ok = 0;

    //2.
    fin >> n >> gmax >> z;

    //3.
    while(i<n){
        fin >> l >> in >> gzi;
        g = in;
        s = 0;
        zile = 0;
        while(zile<=z){
            if(z-zile>=7 && z-zile>0){
                s = s + 1;
                g = g + 7*(s*gzi);
                //cout << "g = " << g << endl;
                zile = zile + 7;
            }else{
                if(z-zile<=0){
                    break;
                }
                s = s + 1;
                g = g + (z-zile)*(s*gzi);
                //cout << "g = " << g << endl;
                zile = zile + (z-zile);
            }
            //cout << "saptamana = " << s << endl;
        }
        cout << "g = " << g << endl;
        if(g>gmax){
            bune = bune + 1;
            fout << g << " " << l << endl;
            ok = ok + 1;
        }
        i++;
    }

    //4.
    if(ok == 0){
        fout << 0 << endl;
    }
    return 0;
}
