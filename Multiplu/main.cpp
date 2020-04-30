#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Multiplu.in");
ofstream fout("Multiplu.out");

int main()
{
    //1.
    int N = 0;
    //2.
    fin>>N;
    //3.
    if(N%3==0){
        fout<<"Da";
    }else{
        fout<<"Nu";
        }

    return 0;
}
