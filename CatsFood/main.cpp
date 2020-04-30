#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("catsfood.in");
ofstream fout("catsfood.out");

int main()
{
    //1.
    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    int n = 0;
    int i = 1;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int cod = 0;
    int bune = 0;
    int da = 0;

    //2.
    fin >> p1 >> p2 >> p3 >> n;

    //3.
    while(i<=n){
        fin >> cod;
        c1 = (cod%1000)/100;
        c2 = (cod%100)/10;
        c3 = cod%10;
        if((c1 == p1 || c1 == p2 || c1 == p3) ||
           (c2 == p1 || c2 == p2 || c2 == p3) ||
           (c3 == p1 || c3 == p2 || c3 == p3)){
            bune = bune + 1;
           }
        if((c1 == p1 && c2 == p2 && c3 == p3) ||
           (c1 == p1 && c2 == p3 && c3 == p2) ||
           (c2 == p1 && c1 == p2 && c3 == p3) ||
           (c2 == p1 && c2 == p3 && c3 == p2) ||
           (c3 == p1 && c2 == p2 && c1 == p3) ||
           (c3 == p1 && c2 == p2 && c1 == p3)){
            da = 1;
           }
        i++;
    }

    //4.
    if(da == 0){
        fout << bune << endl << "NU";
    }else{
        fout << bune << endl << "DA";
    }
    return 0;
}
