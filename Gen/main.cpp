#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int n = 0;
    long long int k = 0;
    long long int i = 1;
    long long int j = 1;

    //2.
    cin >> n >> k;

    //3.
    while(i<=n){
        cout << 1;
        i++;
    }
    cout << "01";
    while(j<=k){
        cout << 0;
        j++;
    }
    cout << 10;
    return 0;
}
