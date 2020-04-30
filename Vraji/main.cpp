#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("vraji.in");
ofstream fout("vraji.out");
int main()
{
    //1.
    int maxi = 0;
    int vraja1 = 0;
    int viteza1 = 0;
    int vraja2 = 0;
    int viteza2 = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int i = 1;
    int n = 0;
    int cmmdc = 0;
    int cmmdc1 = 0;

    //2.
    fin >> n >> vraja1 >> viteza1 >> vraja2 >> viteza2;

    //3.
    a = vraja1*viteza1;
    b = vraja2*viteza2;
    if(a>maxi) maxi = a;
    if(b>maxi) maxi = b;
    while(b>0){
        c = a%b;
        a = b;
        b = c;
    }
    cmmdc1 = a;
    //cout << cmmdc1;
    while(i<=(n-2)){
        int vraja = 0;
        int viteza = 0;
        fin >> vraja >> viteza;

        cmmdc = 0;
        a = vraja*viteza;
        //cout << a << " ";
        b = cmmdc1;
        //cout << cmmdc1 << endl;
        c = 0;
        //cout << a << " " << b << " " << c << endl;
        if(a>maxi) maxi = a;
        while(b>0){
            c = a%b;
            a = b;
            b = c;
            //cout << a << " " << b << " " << c << endl;
        }
        //cout << a << endl;
        cmmdc = a;
        i++;
    }

    //4.
    fout << maxi << endl << cmmdc;
    return 0;
}
