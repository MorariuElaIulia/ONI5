#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("gorm.in");
ofstream fout("gorm.out");

int main()
{
    //1.
    int a1,a2,a3,a4,a5,a6,a7,a8,a9;
    int p1,p2,p3,p4,p5,p6,p7,p8,p9;
    int i = 1;

    int nr_apa_impar = 0;
    int nr_apa_par = 0;

    int nr_pamant_impar = 0;
    int nr_pamant_par = 0;
    int nr_reprezinta_apa = 0;
    int nr_reprezinta_pamant = 0;
    int valoa = 0;
    int valop = 0;

    //2.
    fin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9 >> p1 >> p2 >> p3 >> p4 >> p5 >> p6 >> p7 >> p8 >> p9;

    //3.
    if(a1%2 == 1){
        nr_apa_impar = nr_apa_impar*10 + a1;
    }else{
        nr_apa_par = nr_apa_par*10 + a1;
    }

    if(a2%2 == 1){
        nr_apa_impar = nr_apa_impar*10 + a2;
    }else{
        nr_apa_par = nr_apa_par*10 + a2;
    }

    if(a3%2 == 1){
        nr_apa_impar = nr_apa_impar*10 + a3;
    }else{
        nr_apa_par = nr_apa_par*10 + a3;
    }

    if(a4%2 == 1){
        nr_apa_impar = nr_apa_impar*10 + a4;
    }else{
        nr_apa_par = nr_apa_par*10 + a4;
    }

    if(a5%2 == 1){
        nr_apa_impar = nr_apa_impar*10 + a5;
    }else{
        nr_apa_par = nr_apa_par*10 + a5;
    }

    if(a6%2 == 1){
        nr_apa_impar = nr_apa_impar*10 + a6;
    }else{
        nr_apa_par = nr_apa_par*10 + a6;
    }

    if(a7%2 == 1){
        nr_apa_impar = nr_apa_impar*10 + a7;
    }else{
        nr_apa_par = nr_apa_par*10 + a7;
    }

    if(a8%2 == 1){
        nr_apa_impar = nr_apa_impar*10 + a8;
    }else{
        nr_apa_par = nr_apa_par*10 + a8;
    }

    if(a9%2 == 1){
        nr_apa_impar = nr_apa_impar*10 + a9;
    }else{
        nr_apa_par = nr_apa_par*10 + a9;
    }










    if(p1%2 == 1){
        nr_pamant_impar = nr_pamant_impar*10 + p1;
    }else{
        nr_pamant_par = nr_pamant_par*10 + p1;
    }

    if(p2%2 == 1){
        nr_pamant_impar = nr_pamant_impar*10 + p2;
    }else{
        nr_pamant_par = nr_pamant_par*10 + p2;
    }

    if(p3%2 == 1){
        nr_pamant_impar = nr_pamant_impar*10 + p3;
    }else{
        nr_pamant_par = nr_pamant_par*10 + p3;
    }

    if(p4%2 == 1){
        nr_pamant_impar = nr_pamant_impar*10 + p4;
    }else{
        nr_pamant_par = nr_pamant_par*10 + p4;
    }

    if(p5%2 == 1){
        nr_pamant_impar = nr_pamant_impar*10 + p5;
    }else{
        nr_pamant_par = nr_pamant_par*10 + p5;
    }

    if(p6%2 == 1){
        nr_pamant_impar = nr_pamant_impar*10 + p6;
    }else{
        nr_pamant_par = nr_pamant_par*10 + p6;
    }

    if(p7%2 == 1){
        nr_pamant_impar = nr_pamant_impar*10 + p7;
    }else{
        nr_pamant_par = nr_pamant_par*10 + p7;
    }

    if(p8%2 == 1){
        nr_pamant_impar = nr_pamant_impar*10 + p8;
    }else{
        nr_pamant_par = nr_pamant_par*10 + p8;
    }

    if(p9%2 == 1){
        nr_pamant_impar = nr_pamant_impar*10 + p9;
    }else{
        nr_pamant_par = nr_pamant_par*10 + p9;
    }







    //4.
    //cout << "nr_apa_impar=" << nr_apa_impar << " nr_apa_par=" << nr_apa_par << endl;
    //cout << "nr_pamant_impar=" << nr_pamant_impar << " nr_pamant_par=" << nr_pamant_par << endl;
    if(nr_apa_impar>nr_apa_par)
    {
        nr_reprezinta_apa = nr_apa_impar;
        valoa = nr_apa_par;
    }
    if(nr_apa_par>nr_apa_impar)
    {
        nr_reprezinta_apa = nr_apa_par;
        valoa = nr_apa_impar;
    }

    if(nr_pamant_impar>nr_pamant_par)
    {
        nr_reprezinta_pamant = nr_pamant_impar;
        valop = nr_pamant_par;
    }
    if(nr_pamant_par>nr_pamant_impar)
    {
        nr_reprezinta_pamant = nr_pamant_par;
        valop = nr_pamant_impar;
    }

    if(nr_reprezinta_apa == nr_reprezinta_pamant){
        if(valoa == valop){
            fout << "nu exista castigator";
        }else{
            if(valoa>valop) fout << "tribul de apa";
            if(valop>valoa) fout << "tribul de pamant";
        }
    }else{
        if(nr_reprezinta_apa>nr_reprezinta_pamant){
            fout << "tribul de apa";
        }else{
            fout << "tribul de pamant";
        }
    }
    return 0;
}
