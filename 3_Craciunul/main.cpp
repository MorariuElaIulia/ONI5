#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Craciunul.in");
ofstream fout("Craciunul.out");
int main()
{
    //1.
    int S = 0;
    int d = 0;
    int r = 0;
    int m = 0;

    //2.
    fin >> d >> r >> m >> S;

    //3.
    if(S >= d){
        //DA
        fout << "Poate cumpara drona.";
    }
    if(S >= r){
        fout << "Poate cumpara robbotul.";
    }
    if(S >= m){
        fout << "Poate cumpara masinuta.";
    }
    if(S<m){
        fout << "Nu poate cumpara nici una dintre ele.";
    }
    return 0;
}
