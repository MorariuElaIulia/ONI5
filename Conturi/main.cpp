#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("conturi.in");
ofstream fout("conturi.out");

int main()
{
    //1.
    long long int n = 0;
    long long int x = 0;
    long long int b = 0;
    long long int i = 1;
    long long int nr = 0;
    long long int c = 0;
    long long int gen = 0;
    long long int maxi = 0;
    long long int bani = 0;

    //2.
    fin >> n >> x;

    //3.
    while(i<=n){
        fin >> nr;
        //cout << nr << endl;
        c = (nr%1000000)/100000;
        //cout << c << endl;
        gen = (nr%100000)/10000;
        //cout << gen << endl;
        bani = nr%10000;
        //cout << bani << endl;
        if(c == x && gen == 1){
            if(bani>=maxi){
                maxi = bani;
            }
        }
        i++;
    }

    //4.
    fout << maxi;
    return 0;
}
