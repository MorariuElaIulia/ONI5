#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("unupatru.in");
ofstream fout("unupatru.out");
int main()
{
    //1.
    unsigned long long int n = 0;
    unsigned long long int nr = 0;
    unsigned long long int c = 0;
    unsigned long long int i = 1;
    unsigned long long int nr2 = 0;

    //2.
    fin >> n;

    //3.
    while(i<=n){ //Pentru fiecare numar
        fin >> nr;
        nr2 = nr;
        unsigned long long int pasi = 0;

        while(true){
            unsigned long long int suma = 0;
            while(nr2>0){
                unsigned long long int patrat = 0;
                c = nr2%10;
                nr2 = nr2/10;
                //cout << "nrn2 = " << nrn2 << endl;
                //cout << "c = " << c << endl;
                patrat = c*c;
                suma = suma + patrat;
                //cout << "patrat = " << patrat << endl;
                //cout << "suma = " << suma << endl;
                //cout << "pasi = " << pasi << " ";
            }
            pasi = pasi + 1;
            if(suma == 1 || suma == 4) break;
            nr2 = suma;
        }
        fout << pasi << " ";
        i++;
    }
    return 0;
}
