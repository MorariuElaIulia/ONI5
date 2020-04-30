#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("lacusta.in");
ofstream fout("lacusta.out");

int main()
{

    //1.
    int M = 0;
    int N = 0;
    int Z = 0;
    int s = 0;
    int i = 1;


    //2.
    fin >> N >> M >> Z;

    //3.
    int sept = Z/7;
    int rest = Z%7;
    s = sept*5*N+sept*2*M;
    if (rest == 6){
        s = s + 5*N + M;
    }else{
        s = s+rest*N;
    }



    //4.
    fout << s;

    return 0;
}
