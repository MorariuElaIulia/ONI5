#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("ferma.in");
ofstream fout("ferma.out");
int main()
{
    //1.
    int sa = 0;
    int sm = 0;
    int mm = 0;
    int mp = 0;
    int a = 0;
    int n = 0;
    int i = 0;
    int nr = 0;
    int c1 = 0;
    int cm = 0;
    int cf = 0;
    int cp = 0;
    int nrr = 0;
    int ncmp = 0;

    //2.
    fin >> a >> n;

    //3.
    while(i<n){
        fin >> nr;
        c1 = nr/1000;
        nrr = nr%1000;
        cm = (nrr/100)%10;
        cf = (nrr/10)%10;
        cp = nrr%10;

        if(c1 == a){
            sm = sm + cm;
        }

        if(cp>mp){
            mp = cp;
            ncmp = 1;
        }else if(cp == mp && mp>=0){
                ncmp = ncmp + 1;
                //cout << "cp = " << cp << " mp = " << mp << endl;

        }

        sa = sa + cm + cf + cp;
        i++;
    }

    //4.
    fout << sm << endl;
    fout << sa << endl;
    fout << mp << endl;
    fout << ncmp << endl;
    return 0;
}
