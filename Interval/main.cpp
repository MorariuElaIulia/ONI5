#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Interval.in");
ofstream fout("Interval.out");


int main()
{
    //1.
    int n = 0;

    //2.
    fin>>n;

    //3.
    if (n<10){
        fout<<"NU";
    }else{
        if(n<10){
            fout<<"DA";
        }else{
             fout<<"NU";
        }
    }
    return 0;
}
