#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int n = 0;
    long long int p = 0;
    long long int j = 0;
    long long int i = 1;

    //2.
    cin >> n;

    //3.
    while(i<=n){
        p = i*i + p;
        i++;
        cout << p << " " ;
            }

    return 0;
}
