#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("unghi.in");
ofstream fout("unghi.out");

int main()
{
    //1.
    int n = 0;
    float m = 0;
    float h = 0;
    int i = 1;
    float unghi1 = 0;
    float unghi2 = 0;
    float unghi = 0;

    //2.
    fin >> n;
    cout << "n = " << n << endl;

    //3.
    while(i<=n){
        fin >> h >> m;
        cout << "h = " << h << " m = " << m << endl;
        unghi1 = h*30 + (m*30)/60;
        unghi2 = m*6;
        cout << "unghi1 = " << unghi1 << " unghi2 = " << unghi2 << endl;
        if(unghi1>unghi2){
            unghi = unghi1 - unghi2;
        }else{
            unghi = unghi2 - unghi1;
        }
        fout << unghi << endl;
        i++;
    }
    return 0;
}
