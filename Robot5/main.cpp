#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("robot5.in");
ofstream fout("robot5.out");

int main()
{
    int C = 0; fin >> C;
    if(C == 1){

        //1.
        int N = 0;
        int W = 0;
        int X = 0;
        int P = 0;
        int E = 0;
        int pasi = 0;

        //2.
        fin >> N >> W >> X >> P;
        E = X;

        //3.
        if(E<P) pasi = E;
        if(E == P){
            if(E<X) pasi = 2 + (X-E);
            if(E>X) pasi = 2 + (E-X);
            if(E == X) pasi = 2 + E;
        }
        if(E>P) pasi = E;

        //4.
        fout << pasi << endl;

    }else{
        //1.
        int N = 0;
        int W = 0;
        int X = 0;
        int pasi = 0;
        int pozr;
        int poz;

        //2.
        fin >> N >> W >> X;

        //3.
        cout << "x = " << X << endl;
        pozr = W;
        poz = W + 1;
        pasi = W + X;
        X = X - (X-W);
        //cout << "pasi = " << pasi << endl;
        if(pasi>N){
            pozr = pasi - N;
            pasi = pasi + (pasi - N);
            if(pozr >= poz){
                pasi = pasi + (W - X - 1);
            }
        }

        //4.
        fout << pasi << " " << poz << endl;

    }
    return 0;
}
