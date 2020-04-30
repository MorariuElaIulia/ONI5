#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("pinguini.in");
ofstream fout("pinguini.out");

int main()
{
    //1.
    int c = 0;
    int N = 0;
    int i = 1;
    int p = 0;
    int pinguini = 0;
    int grupuri = 0;
    int maxim = 0;
    int pinguini_in_grup = 0;
    int g = 0;
    int apa = 0;
    int intrat = 0;

    //2.
    fin >> c >> N;

    //3.
    while(i<=N){
        fin >> p;
        //cout << "p = " << p << endl;
        if(p == 1){
            apa = 1;
            intrat = 1;
            pinguini_in_grup = 0;
        }
        if(p == 2){
            pinguini = pinguini + 1;
            pinguini_in_grup = pinguini_in_grup + 1;
            if(apa == 1){
                grupuri = grupuri + 1;
                apa = 0;
            }
        }
        //cout << "pinguini_in_grup = " << pinguini_in_grup << endl;
        if(pinguini_in_grup>maxim){
            maxim = pinguini_in_grup;
            //cout << "maxim = " << maxim << endl;
        }
        i++;
    }

    //4.
    if(c == 1){
        fout << pinguini << endl;
    }else if(c == 2){
        if(intrat == 0){
            fout << 1 << endl;
        }else{
            fout << grupuri << endl;
        }
    }else{
        fout << maxim << endl;
    }
    return 0;
}
