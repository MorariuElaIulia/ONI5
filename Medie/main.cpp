#include <iostream>

using namespace std;

int main()
{
    //1.
    float M = 0;
    int n = 0;
    int i = 1;
    int num = 0;
    float suma = 0;
    float pare = 0;

    //2.
    cin >> n;

    //3.
    while(i<=n){
        cin >>  num;
        if(num%2==0){
            pare = pare + 1;
            suma = suma + num;
        }
        i++;
    }
    M = suma/pare;

    //4.
    cout  << M;
    return 0;
}
