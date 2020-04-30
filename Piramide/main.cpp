#include <iostream>

using namespace std;

int main()
{
    //1.
    int n = 0;
    int p = 0;
    int i = 1;

    //2.
    cin >> n;

    //3.
    while(i<=n){//pt fiecare rand
        int j = 1;
        while(j<=i){//printez rand
            cout << j << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
