#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("intors.in");
ofstream fout("intors.out");
int main()
{
   //1.
   int nr = 0;
   int c = 0;
   int nr_pe_dos = 0;

   //2.
   fin >> nr;


   cout << nr << endl;

   //3.
   while(nr >= 0){
    c = nr%10;
    nr = nr/10;
    nr_pe_dos = nr_pe_dos*10 + c;

                }

    cout << nr << nr_pe_dos << endl;
    //4.
    fout << nr_pe_dos;




    return 0;
}
