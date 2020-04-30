#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("alo.in");
ofstream fout("alo.out");

int main()
{
    //1.
    int e = 0;
    int n = 0;
    int nr = 0;
    int minute = 0;
    int nrc = 0;

    //2.
    fin >> e >> n;

    //3.
    for(int i = 1; i<=n; i++){
        fin >> nr >> minute;
        nrc = 4;
        int c1 = 0;
        int nr2 = 0;
        int eplus = minute;
        int epier = minute*2;
        //cout << epier << endl;

        c1 = (nr%100000)/10000;
        //cout << c1 << endl;
        if(c1 == 1){
            if(nr%10 == 5) e = e - epier;
            //cout << e << endl;
            //cout << nr%10 << endl;
        }else{
            if(nr%10 == 5) e = e + minute;
            //cout << e << endl;
        }
    }

    //4.
    fout << e;
    return 0;
}
