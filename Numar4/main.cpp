#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numar4.in");
ofstream fout("numar4.out");

int main()
{
    //1.
    int c = 0;
    long long int nr = 0;
    long int incercari = 0;

    //2.
    fin >> nr;

    //3.
    while(nr > 0){
        c = nr % 10;
        if(c % 2 == 1){
            incercari = incercari + 5;
        }else{
            incercari = incercari + 4;
        }
        nr /= 10;
    }

    //4.
    fout << incercari;
    return 0;
}
