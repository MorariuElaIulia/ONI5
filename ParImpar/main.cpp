#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("ParImpar.in");
ofstream fout("ParImpar.out");

int main()
{
    //1.
    int N = 0;
    //2.
    fin>>N;
    //3.
    if(N%2==0){
        fout<<"Este par";
    }else{
        fout<<"Este impar";}

    return 0;
}
