#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("Pagini.in");
ofstream fout("Pagini.out");
int main()
{
    //1.
    int x =0;
    int y = 0;

    //2.
    fin >> x >> y;

    //3.
    if(y-2>=x){
        //Da
        fout << "Da, poate";
    }else{
         if(x%2==0){
        fout << "Da, poate";
    }else{
         fout << "Nu, nu poate";
         }
         }
   return 0;
}
