#include <iostream>

using namespace std;

int main()
{
    //1.
    int n = 0;
    int nu = 0;
    int i = 1;
    int min = 1000;

    //2.
    cin >> n;

    //3.
    while(i<=n){
        cin >> nu;
        if(nu<min){min = nu;}
        i++;
    }

    //4.
    cout << min;
    return 0;
}
