#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int n = 0;
    long long int cap = 6;
    long long int i = 1;

    //2.
    cin >> n;

    //3.
    while(i<n){
        cap = cap - 1 + 6;
        i++;
    }
    cap = cap - 1;

    //4.
    cout << cap;
    return 0;
}
