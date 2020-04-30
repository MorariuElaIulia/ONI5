#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int n = 0;
    long long int a = 20000000000;
    long long int b = 0;
    long long int c = 0;
    long long int i = 1;
    long long int num = 0;
    long long int x = 0;
    long long int y = 0;

    //2.
    cin >> n;

    //3.
    while(i<=n){
        cin >> num;
        if(num<a){
           a = num;
        }
        if(num>b){
            b = num;
        }
        i++;
    }

    x = a;
    y = b;

    //cout << "a=" << a << " " << "b=" << b << " ";
    while(y>0){
        c = x%y;
        x=y;
        y=c;
    }
    //cout << "x="  << x << " " << "y=" << y << endl;
    a = a/x;
    b = b/x;

    //4.
    cout << a << "/" << b;
    return 0;
}
