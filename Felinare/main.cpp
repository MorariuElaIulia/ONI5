#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("felinare.in");
ofstream fout("felinare.out");

int main()
{
    //1.
    int n = 0;
    int p = 0;
    int apasari_buton = 0;
    int i = 0;
    int f = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    //2.
    fin >> n >> p;
    //cout << "n = " << n << " p = " << p << endl;
    a = n;
    b = p;
    int v[n];

    //3.
    while(b>0){
        c = a%b;
        a = b;
        b = c;
    }
    //cout << "a = " << a << endl;
    if(a == 1){
        fout << "FARA SOLUTIE";
    }else{
        apasari_buton = ((n*p)/a)/p;


        //4.
        fout << apasari_buton;
    }
}
