#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("rachete.in");
ofstream fout("rachete.out");
int main()
{
    //1.
    int a1 = 0;
    int r2 = 0;
    int v3 = 0;
    int n = 0;
    int r = 0;
    int j = 1;
    int k = 1;
    int x = 1;

    //2.
    fin >> n;

    //3.
    for(int i = 0; i<n; i++){
        fin >> r;
        if(r == 1) a1 = a1 + 1;
        if(r == 2) r2 = r2 + 1;
        if(r == 3) v3 = v3 + 1;
    }
        while(j<=a1){
            fout << "1 ";
            j++;
        }

        while(k<=r2){
            fout << "2 ";
            k++;
        }

        while(x<=v3){
            fout << "3 ";
            x++;
        }
    return 0;
}
