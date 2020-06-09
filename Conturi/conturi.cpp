#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("conturi.in");
ofstream fout("conturi.out");

int main()
{
    //1.
    int n = 0;
    int x = 0;
    int nr = 0;
    int gen = 0;
    int banca = 0;
    int bani = 0;
    int maxi = 0;

    //2.
    fin >> n >> x;

    //3.
    for(int i = 0; i<n; i++){
        fin >> nr;
        banca = nr/100000;
        gen = (nr%100000)/10000;
        bani = nr%10000;
        if(banca == x && gen == 1){
            if(maxi<bani) maxi = bani;
        }
    }

    //4.
    fout << maxi << endl;
    return 0;
}
