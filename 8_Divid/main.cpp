#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("Divid.in");
ofstream fout("Divid.out");
int main()
{
    //1.
    int n = 0;
    int m = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int nr = 0;

    //2.
    fin >> n >> m;


    cout << n << " " << m;
    //3.
    c1 = n%10;
    c2 = (n/10)%10;
    c3 = (n/100)%10;

    if(m%c1==0){
        //DA
        nr = nr + 1;
    }
    if(m%c2==0){
        //DA
        nr = nr + 1;
    }
    if(m%c3==0){
        nr = nr + 1;
    }

    //4.
    fout << nr << " dintre cifrele lui n pot fi divizate cu m.";
    return 0;
}
