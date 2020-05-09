#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("datapal.in");
ofstream fout("datapal.out");

int main()
{
    //1.
    int n = 0;
    int i = 0;
    int palindrom = 0;

    //2.
    fin >> n;
    int s[100];
    char c[8];

    //3.
    for(int i = 0; i<100; i++){
        s[i] = 0;
    }

    i = 0;
    while(i<n){
        fin >> c[0] >> c[1] >> c[2] >> c[3] >> c[4] >> c[5] >> c[6] >> c[7];
        if((c[0] == c[7]) && (c[1] == c[6]) && (c[2] == c[5]) && (c[3] == c[4])){
            palindrom = palindrom + 1;
            int secol = (c[4] - '0')*10 + (c[5] - '0') + 1;
            cout << "secol = " << secol << endl;
            s[secol + 1] = secol;
        }
        i++;
    }

    //4.
    fout << palindrom << endl;
    for(int i = 0; i<100; i++){
        if(s[i]!=0){
            fout << s[i] << " ";
        }
    }
    return 0;
}
