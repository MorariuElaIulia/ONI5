#include <iostream>

using namespace std;

int main()
{
    //1.
    int n = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int cmid = 0;
    int cmax = 0;
    int cmin = 9;

    //2.
    cin >> n;

    //3.
    c3 = n%10;
    c2 = (n/10)%10;
    c1 = (n/100)%10;

    if(c3 == c2 && c2 == c1){
        cout << c1;
    }else{

        if(c3>c2 && c3>c1) cmax = c3;
        if(c2>c3 && c2>c1) cmax = c2;
        if(c1>c2 && c1>c3) cmax = c1;

        if(c3<c1 && c3<c2) cmin = c3;
        if(c2<c1 && c2<c3) cmin = c2;
        if(c1<c2 && c1<c3) cmin = c1;

        if(c3<cmax && c3>cmin) cmid = c3;
        if(c2<cmax && c2>cmin) cmid = c2;
        if(c1<cmax && c1>cmin) cmid = c1;

        //4.
        cout << cmid;
    }
    return 0;
}
