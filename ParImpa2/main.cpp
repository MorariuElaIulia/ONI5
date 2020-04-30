#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("parimpar2.in");
ofstream fout("parimpar2.out");
int main()
{
    //1.
    int i = 0;
    int p = 0;
    int nr = 0;
    int pare = 0;
    int impare = 0;
    int sepoate1 = 0;
    int sepoate2 = 0;
    int am_intrat = 0;
    int am_intrat_2 = 0;
    int nr_raspuns_1 = 0;
    int nr_raspuns_2 = 0;

    //2.
    fin >> i >> p;

    //3.
   while(true)
   {
        fin >> nr;
        if(fin.eof()) break;
        //cout << "nr = " << nr << endl;
        if(nr%2==0)
        {
            pare = pare + 1;
        }
        else
        {
            impare = impare + 1;
        }
        if(pare == p && nr % 2 == 0){
            //fout << nr << " ";
            sepoate1 = 1;
            am_intrat = 1;
            nr_raspuns_1 = nr;
        }

        if(impare == i && nr % 2 == 1){
        //    fout << nr << " ";
            sepoate2 = 1;
            am_intrat_2 = 1;
            nr_raspuns_2 = nr;
        }


   }

   if(am_intrat == 0 || am_intrat_2 == 0) fout << "Nu Exista";
   if(am_intrat == 1 && am_intrat_2 == 1) fout << nr_raspuns_1 << " " << nr_raspuns_2;
   //if(sepoate2 == 0) fout << "Nu Exista";

    return 0;
}
