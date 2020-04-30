#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");
int main()
{
    //1.
    long long int n = 0;
    long long int i = 0;
    long long int nr = 0;
    long long int mini = 10;
    long long int c = 0;
    long long int c0 = 0;
    long long int c1 = 0;
    long long int c2 = 0;
    long long int c3 = 0;
    long long int c4 = 0;
    long long int c5 = 0;
    long long int c6 = 0;
    long long int c7 = 0;
    long long int c8 = 0;
    long long int c9 = 0;

    //2.
    fin >> n;
    //cout << n;

    //3.
    while(i<=n){
        //cout << i << " ";
        fin >> nr;
        //cout << nr << " ";
        long long int nr2 = nr;
        while(nr2>0){
            c = nr2%10;
            //cout << nr2 << endl;
            if(c == 0) c0 = c0 + 1;
            if(c == 1) c1 = c1 + 1;
            if(c == 2) c2 = c2 + 1;
            if(c == 3) c3 = c3 + 1;
            if(c == 4) c4 = c4 + 1;
            if(c == 5) c5 = c5 + 1;
            if(c == 6) c6 = c6 + 1;
            if(c == 7) c7 = c7 + 1;
            if(c == 8) c8 = c8 + 1;
            if(c == 9) c9 = c9 + 1;
            //cout << c4 << " " << c5 << " " << c6 << " " << c7 << " " << c8 << endl;
            nr2 = nr2/10;
        }
        i++;
    }

    //cout << c0 << " " << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << " " << c6 << " " << c7 << " " << c8 << " " << c9;
    //cout << c4  << " " << c5 << " " << c6 << " " << c7 << " " << c8;
    if(c0<mini) mini = c0;
    if(c1<mini) mini = c1;
    if(c2<mini) mini = c2;
    if(c3<mini) mini = c3;
    if(c4<mini) mini = c4;
    if(c5<mini) mini = c5;
    if(c6<mini) mini = c6;
    if(c7<mini) mini = c7;
    if(c8<mini) mini = c8;
    if(c9<mini) mini = c9;
    //cout << mini;

    if(c0 == mini) fout << "0" << " ";
    if(c1 == mini) fout << "1" << " ";
    if(c2 == mini) fout << "2" << " ";
    if(c3 == mini) fout << "3" << " ";
    if(c4 == mini) fout << "4" << " ";
    if(c5 == mini) fout << "5" << " ";
    if(c6 == mini) fout << "6" << " ";
    if(c7 == mini) fout << "7" << " ";
    if(c8 == mini) fout << "8" << " ";
    if(c9 == mini) fout << "9" << " ";

    return 0;
}
