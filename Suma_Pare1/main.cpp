#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int suma = 0;
    long long int n = 0;

    //3.
    while(true){
        cin >> n;
        if(n==0){break; }
        if(n%2==0){
            suma = suma + n;
        }
    }

    //4.
    cout << suma;
    return 0;
}
