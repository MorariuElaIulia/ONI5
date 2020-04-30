#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Minute.in");
ofstream fout("Minute.out");
int main()
{
    //1.
    int ore = 0;
    int minute = 0;
    int secunde = 0;

    //2.
    fin >> minute;

    //3.
    ore = minute / 60;
    secunde = (minute % 60) * 60;

    //4.
    fout << "Sunt " << ore << " ore " << " si " << secunde << " secunde";
        return 0;
}
