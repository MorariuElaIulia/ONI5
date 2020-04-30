#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("Gigel.in");
ofstream fout("Gigel.out");
int main()
{
    //1.
    int S = 0;
    int c = 0;
    int n = 0;

    //2.
    fin >> S >> c >> n;

    //3.
    if(S/c==0 || S/n==0){
        //DA
        if((S/c==0) || (S/n==0)){
            fout << "CN";
        }else{
        if(S/c==0){
            fout << "C";
        }else{
        if(S/n==0){
            fout << "N";}
           }
    }else{
        fout << "nimic";
        }











        return 0;
}
