#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Minim.in");
ofstream fout("Minim.out");
int main()
{
    //1.
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    int minim = 1000;

    //2.
    fin >> a1 >> a2 >> a3 >> a4 >> a5;

    //3.
    if(a1<minim){
        minim = a1;
    }
    if(a2<minim){
        minim = a2;
    }
    if(a3<minim){
        minim = a3;
    }
    if(a4<minim){
        minim = a4;
    }
    if(a5<minim){
        minim = a5;
    }
    //4.
    fout << "Numarul minim este: " << minim;
    return 0;
}
