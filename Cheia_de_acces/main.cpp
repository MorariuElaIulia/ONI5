#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("cheia.in");
ofstream fout("cheia.out");
int main()
{
    //1.
    int n = 0;
    int i = 1;
    int cod = 0;
    int c = 0;
    int c2 = 0;
    int nr = 0;
    int NR = 0;
    int nrbun = 0;
    int cheie_ultima = 0;
    int nrc = 0;

    //2.
    fin >> n >> cod;

    //3.
    while(i<=n){
        fin >> nr;
        int cod2 = cod;
        int nr2 = nr;
        while(nr2>0){
            c = nr2%10;
            int cheie = 0;
            while(cod2>0){
                c2 = cod2%10;
                cod2 = cod2/10;

                  cout << "c = " << c << " " << "c2 = " << c2 << endl;
                if(c == c2){
                    nrbun = nrbun + 1;
                    cheie = cheie*10 + c;
                }
            }
            cheie_ultima = cheie;

            nr2 = nr2/10;
        }
        i++;
    }
    NR = n - nrbun;

    //4.
    fout << NR << endl;
    fout << cheie_ultima << endl;
    return 0;
}
