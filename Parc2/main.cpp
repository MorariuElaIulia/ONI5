#include <iostream>

using namespace std;

int main()
{
    //1.
    int n = 0;
    int alei = 1;
    int cop = 0;
    int cre = 0;
    int cui = 0;
    int pas = 0;

    //2.
    cin >> n;

    //3.
    alei = alei*n;
    cop = alei*n;
    cre = cop*n;
    cui = cre*n;
    pas = cui*n;

    //4.
    cout << pas;
    return 0;
}
