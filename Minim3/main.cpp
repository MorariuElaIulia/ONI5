#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int a = 0;
    long long int b = 0;
    long long int c = 0;
    long long int min = 1000000000;

    //2.
    cin >> a >> b >> c;

    //3.
    if(a<min){
        min = a;
    }
    if(b<min){
        min = b;
    }
    if(c<min){
        min = c;
    }

    //4.
    cout << min;
    return 0;
}
