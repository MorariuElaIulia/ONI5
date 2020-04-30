#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Multiplu_De_k.in");
ofstream fout("Multiplu_De_k.out");


int main()
{


    //1.
    int N = 0;
    int k = 0;

    //2.
    fin >> N >> k;
    cout << N <<  " " <<  k;

    //3.
    if (N%k==0){
        fout<<"Da";
    }else{
        fout<<"Nu";
    }

    return 0;
}
