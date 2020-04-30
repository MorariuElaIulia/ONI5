#include <iostream>

using namespace std;

int main()
{
    //1.
    int n = 0;
    int s = 0;
    int c = 0;
    int i = 1;

    //2.
    cin >> n;

    //3.
    while(i<=2){
        c = n%10;
        n = n/10;
        s = s + c;
        i = i + 1;
    }

    //4.
    cout << s;
    return 0;
}
