#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("concurs.in");
ofstream fout("concurs.out");

int main()
{
    //1.
    int n = 0;
    int i = 1;
    int ip = 0;
    int in = 0;
    int sp = 0;
    int s = 0;
    int dif = 0;
    int ii = 0;
    int si = 0;

    //2.
    fin >> n >> ip >> sp;

    //3.
    while(i<n){
        fin >> in >> s;
        //cout << "in=" << in << " s=" << s << " ip=" << ip << " sp=" << sp << endl;
        if(ip>in){
            ii = ip;
            if(sp>s){
                si = s;
            }else{
                si = sp;
            }
        }
        ip = in;
        sp = s;
        i++;
    }
    //4.
    cout << ii << " " << sp;
    if(ii == 0 || si == 0){
        fout << "Suspendare";
    }else{
        for(int i = ii; i<=si; i++){
            fout << i << " ";
        }
    }
    return 0;
}
