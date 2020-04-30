#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int n = 0;
    long long int k = 0;
    long long int m = 0;
    long long int i = 1;
    long long int s = 0;
    long long int nr = 0;

    //2.
    cin >> k >> n;
    //cout << n;

    //3.
    s = s + k;
    nr = k;
    while(i<n){
        nr = nr*10 + k;
        //cout << nr << endl;
        s = s + nr;
        i++;
    }

    //4.
    cout << s << endl;
    return 0;
}
