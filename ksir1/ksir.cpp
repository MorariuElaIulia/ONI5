#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("ksir.in");
ofstream fout("ksir.out");

int main()
{
    //1.
    long long int k = 0;
    long long int rez = 0;
    long long int t = 0;
    long long int i = 0;
    long long int g = 0;
    long long int termen = 0;
    long long int poz = 0;
    int gasit = 0;

    //2.
    fin >> k;
    //cout << "k = " << k << endl;

    //3.
    //Aflam Grupa
    while(true){
        g = g + 1;
        if(g*g>=k){
            break;
        }
    }

    //cout << "grupa = " << g << endl;

    //Generam Grupa
    t = g*g;
    poz = (g + g-1) - (t - k);
    //cout << "poz = " << poz << endl;
    if(poz<g){
        fout << poz << endl;
    }else{
        fout << g << endl;
    }
    return 0;
}
