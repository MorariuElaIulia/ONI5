#include <iostream>

using namespace std;

int main()
{
    //1.
    int a = 0;
    int b = 0;
    int sum = 0;
    int dif = 0;
    int prod = 0;
    int cat = 0;

    //2.
    cin >> a >> b;

    //3.
    sum = a + b;
    dif = a - b;
    prod = a*b;
    cat = a/b;

    //4.
    cout << sum << " " << dif << " " << prod << " " << cat << endl;
    return 0;
}
