#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("zile.in");
ofstream fout("zile.out");
int main()
{
    //1.
    int a = 0;
    int b = 0;
    int c = 0;
    int luni = 0;
    int marti = 0;
    int miercuri = 0;
    int joi = 0;
    int vineri = 0;
    int sambata = 0;
    int maxi = 0;

    //2.
    fin >> a >> b >> c;

    //3.
    if(a == 1) luni = luni + 1;
    if(a == 2) marti = marti + 1;
    if(a == 3) miercuri = miercuri + 1;
    if(a == 4) joi = joi + 1;
    if(a == 5) vineri = vineri + 1;
    if(a == 6) sambata = sambata + 1;

    if(b == 1) luni = luni + 1;
    if(b == 2) marti = marti + 1;
    if(b == 3) miercuri = miercuri + 1;
    if(b == 4) joi = joi + 1;
    if(b == 5) vineri = vineri + 1;
    if(b == 6) sambata = sambata + 1;

    if(c == 1) luni = luni + 1;
    if(c == 2) marti = marti + 1;
    if(c == 3) miercuri = miercuri + 1;
    if(c == 4) joi = joi + 1;
    if(c == 5) vineri = vineri + 1;
    if(c == 6) sambata = sambata + 1;

    if(luni>=maxi) maxi = luni;
    if(marti>=maxi) maxi = marti;
    if(miercuri>=maxi) maxi = miercuri;
    if(joi>=maxi) maxi = joi;
    if(vineri>=maxi) maxi = vineri;
    if(sambata>=maxi) maxi = sambata;

    //4.
    if(maxi == luni){
        fout << "LUNI";
    }else{
        if(maxi == marti){
            fout << "MARTI";
        }else{

            if(maxi == miercuri){
                fout << "MIERCURI";
            }else{
                if(maxi == joi){
                    fout << "JOI";
                }else{
                    if(maxi == vineri){
                        fout << "VINERI";
                    }else{
                        if(maxi == sambata) fout << "SAMBATA";
                    }
                }
            }
        }
    }
    return 0;
}
