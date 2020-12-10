#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("razboi.in");
ofstream fout("razboi.out");

long divizori(int n){
    int suma = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            suma = suma + i;
        }
    }
    return suma;
}

int main()
{
    //1.
    int n = 0;
    int regula = 0;
    int cati1 = 0;
    int suma = 0;
    int cati2 = 0;
    int razboinic = 0;

    //2.
    fin >> n >> regula;

    //3.
    if(regula == 1){
        for(int i = 0; i < n; i++){
            fin >> razboinic;
            int c = razboinic % 10;

            if(c == 0 || c == 2 || c == 4 || c == 6 || c == 8){
                cati1++;
            }else{
                cati2++;
            }

        }
    }else{
        for(int i = 0; i < n; i++){
            fin >> razboinic;
            suma = divizori(razboinic);
            if(suma % 2 == 0){
                cati1++;
            }else{
                cati2++;
            }
        }
    }

    //4.
    fout << cati1 << " " << cati2 << endl;
    return 0;
}
