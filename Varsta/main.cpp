#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Varsta.in");
ofstream fout("Varsta.out");

int main()

{
    //1.
    int I = 0;
    int M = 0;
    //2.
    fin>>I>>M;

    //3.
    if(I==M){
        fout<<"Ei au aceasi varsta.";
    }else{

        if(I>M){
            fout<<"Ionel este mai mare, cu: ";
            fout<<(I-M);
        }else{
            fout<<"Mihai este mai mare, cu: ";
            fout<<(M-I);
        }
    }

    return 0;
}

