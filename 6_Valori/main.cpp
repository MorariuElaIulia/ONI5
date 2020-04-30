#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("6_Valori.in");
ofstream fout("6_Valori.out");
int main()
{
    //1.
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    //2.
    fin >> c1 >> c2 >> c3;
    //3.
    if(c1==c2 && c2==c3){
        //DA
        fout << "Toate numerele sunt egale.Nu exista valori distincte.";
    }
    if(c1==c2 && (c2!=c3)){
        fout << "Sunt doua valori distincte.";
    }
    if(c1==c3 && (c1!=c2)){
        fout << "Sunt doua valori distincte.";
    }
    if(c1!=c2 && c1!=c3 && c2!=c3){
        fout << "Sunt trei valori distincte.";
    }


    return 0;
}
