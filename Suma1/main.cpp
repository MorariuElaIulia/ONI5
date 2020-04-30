#include <iostream>

using namespace std;

int main()
{
    //1.
    long int n = 0;
    long int num = 0;
    long int suma = 0;

    //3.
    while (true){
        cin >> n;
        suma = suma + n;
        if(num==n){break;}
        num = n;
    }

    //4.
    cout << suma;
    return 0;
}
