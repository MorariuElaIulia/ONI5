#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");


//functia puteere
long putere(int baza, int exp){
    long p = 1;
    for (int i=0;i<exp;i++) p = p*baza;
    return p;
}


int main()
{
    //1.
    int n = 0;
    int m = 0;
    int nr = 1;
    int nrc = 0;
    int c = 0;
    int c1 = 0;
    int suma = 0;
    int lama1 = 1;
    int lama2 = 1;

    //2.
    fin >> n;
    nr_nou = n;
    int n2 = n;

    //3.
    for(int n2 = n; n2>0; n2=n2/10){ ///Pentru numarul de cifre
        c = n2%10;
        nrc = nrc + 1;
    }
    //cout << "nrc=" << nrc << endl;

    for(int i = nrc; i>0; i--){
        cout << "#######" << endl;
        int nrs = 0;
        int nrd = 0;

       // cout<<"putere="<<putere(10,i)<< endl;
        lama1 = putere(10,i);
        lama2 = lama1/10;
        //cout << "lama1=" << lama1 << " " << "lama2=" << lama2 << endl;
        c1 = (n%lama1)/lama2;
        cout << "c1=" << c1 << endl;
        if(c1%2 == 0){
            suma = suma + c1;
            nr = nr*10 + c1;
        }else{
            suma = suma + c1;
            nr = nr*10;
        }
    }
    //4.
    m = n - suma;
    //cout << "m=" << m << endl;
    if(m>0 && nr_nou>0){
        fout << nr_nou << endl << nr_nou << " este deosebit";
    }else{
        fout << 0 << endl << 0 << " nu este deosebit";
    }
    return 0;
}
