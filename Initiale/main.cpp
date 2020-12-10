#include <iostream>

using namespace std;

int main()
{
    //1.
    char c = 0;
    char pred = 0;
    int cuvant_precedent = 0;

    //3.
    cin >> pred;
    while(cin.eof()){
        cin >> c;
        if(c == ' ' && cuvant_precedent == 1){
            cuvant_precedent = 0;
            c = toupper(c);
            cout << c;
        }
    }
    return 0;
}
