#include <iostream>

using namespace std;

int main() {
    char sir[257];
    int contor = 0, diff = 'a' - 'A';
    cin.getline(sir, 257);
    bool flag = true;
    for (int i = 0; sir[i] != 0; i++) {
            if (sir[i] == '!' || sir[i] == '.' || sir[i] == '?') {
                contor++; flag = true;
        } else {
            if (sir[i] <= 'z' && sir[i] >= 'a' && flag == true) {
                    sir[i] -= diff; flag = false; }
            }

    }
    cout << contor << '\n' << sir;

    //punctul c!!
    for(int i=0; sir[i]!=NULL; i++) {
            if (sir[i] == '!' || sir[i] == '.' || sir[i] == '?' || sir[i] == ',' || sir[i] == ';' || sir[i] == ':') sir[i]=' ';

    } cout<<endl<<sir;

    return 0;

    }
