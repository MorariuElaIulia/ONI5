#include <iostream>
#include <fstream>
#include <limits.h>

using namespace std;

ifstream fin("numar2.in");
ifstream fin2("numar2.in");
ifstream fin3("numar2.in");
ofstream fout("numar2.out");

int main()
{
    //1.
    int n = 0;
    int x = 0;
    int p = 0;
    char c = 0;
    int aux = 0;
    char pred = 0;
    char predd = 0;
    int mini = INT_MAX;
    int descrescator = 0;

    //2.
    fin3 >> n;
    fin >> n >> predd >> pred;
    int v[10];
    //short * v = new short[n];
    //cout << n << " " << predd << " " << pred << endl;

    //3.
    for(int i = 0; i < 10; i++) v[i] = 0;

    for(int i = 2; i < n; i++){
        fin >> c;
        if((c > pred && (pred > predd || pred == predd)) ){
            descrescator = 1;
            x = pred - '0';
            p = i;
        }else if(c < pred && pred < predd && descrescator == 1){
            descrescator = 0;
        }
        predd = pred;
        pred = c;
    }

    cout << "x = " << x << " p = " << p << endl;

    for(int i = 0; i < p - 0; i++) fin3 >> c;

    for(int i = 1; i < n - p; i++){
        fin3 >> c;
        if(c - '0' < mini && c - '0' > x){
            mini = c - '0';
        }
      //  cout << c << endl;
        v[c-'0']++;
      //  cout << mini << endl;
    }

    //4.
    fin2 >> n;

    v[x]++;

    for(int i = 0; i < p-1; i++){
        fin2 >> c;
        fout << c;
    }

    fout << mini;

//    cout << "mini = " << mini << endl;
  //  cout << "x = " << x << endl;

    for(int i = 0; i < 10; i++){
        //cout << v[i];
        if(i != mini){
            for(int j = 0; j < v[i]; j++){
                fout << i;
            }
        }
    }
    return 0;
}
