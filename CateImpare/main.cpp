#include <iostream>

using namespace std;

int main()
{
    //1.
    long int n = 0;
    long int impare = 0;

    //3.
    while(true){
        cin >> n;
        if(n==0){break; }
        if(n%2==1){
            impare = impare + 1;
        }
    }

    //4.
    cout << impare;
    return 0;
}
