#include <iostream>

using namespace std;

int main()
{
    //1.
    unsigned long long int n = 0;
    unsigned long long int a = 0;
    unsigned long long int b = 0;
    unsigned long long int np = 0;
    unsigned long long int p = 1;

    //2.
    cin >> n >> a >> b;

    //3.
    p = p*2;
    while (true)
    {
        if(p>=a && p<=b)
        {
            if(np<n){
                cout << p << " ";
                np++;
            }
        }
        if(np>n || p>b) break;
        p = p*2;
    }
    return 0;
}
