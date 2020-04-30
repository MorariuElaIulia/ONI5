#include <iostream>

using namespace std;

int main()
{
    //1.
    int	a = 0;
    long long int	putere = 1;
    int i = 1;

    //2.
    cin >> a;

    //3.
    while(i<=16){
        putere = putere*a;
        i = i + 1;
               }

    //4.
    cout  << putere;
    return 0;
}
