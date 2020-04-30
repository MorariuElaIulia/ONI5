#include <iostream>

using namespace std;

int main()
{
    //1.
    int a = 0;
    int b = 0;
    int diferenta = 0;

    //2.
    cin >> a >> b;

    //3.
    if(a>b){
        diferenta = a - b;
           }else{
                diferenta = b - a;
                }
    //4.
    cout << diferenta;
    return 0;
}
