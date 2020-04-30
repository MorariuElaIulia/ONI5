#include <iostream>

using namespace std;

int main()
{
    //1.
    int x = 0;
    int y = 0;
    int n = 0;
    int a = 0;
    int z = 0;
    int h = 0;

    //2.
    cin >> x >> y >> n;

    //3.
    a = n/(x*y);
    z = n%(x*y)/y;
    h = n%(x*y)%y;

    //4.
    cout << a << endl << z << endl << h << endl;

    return 0;
}
