#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("joc.in");
ofstream fout("joc.out");
int main()
{
    //1.
    long long int n = 0;
    long long int n1 = 0;
    long long int n2 = 0;
    long long int c3 = 0;
    long long int a3 = 0;
    long long int cm = 0;
    long long int am = 0;
    long long int i = 1;
    long long int ioana = 0;
    long long int malina = 0;
    long long int nr_special_ioana = 0;
    long long int nr_special_malina = 0;
    long long int castigator = 0;

    //2.
    fin >> n;

    //3.
    while(i<=n){
        fin >> n1 >> n2;
        c3 = n1%1000;
        a3 = n2%1000;

        cm = c3/100;
        am = a3/100;

        if(cm>am){
            nr_special_ioana = n1;
            ioana++;
        }else{
            nr_special_malina = n2;
            malina++;
        }

        if(nr_special_ioana>nr_special_malina) castigator = nr_special_ioana;
        if(nr_special_malina>nr_special_ioana) castigator = nr_special_malina;
        i++;
    }

    //4.
    if(ioana>malina){
        if(castigator == nr_special_ioana){
            fout << castigator << endl << "1" << endl << "1";
        }else{
            fout << castigator << endl << "2" << endl << "1";
        }
    }else{
        if(castigator == nr_special_ioana){
            fout << castigator << endl << "1" << endl << "2";
        }else{
            fout << castigator << endl << "2" << endl << "2";
        }
    }
    return 0;
}
