#include <iostream>

using namespace std;

int main()
{
    //1.
    long int n = 0;
    long int C = 1;
    long int num = 0;

    //2.
    cin >> n;

    //3.
    num = n;

    while (true){
        if(n==1){
            break;
        }
        if(n%2==0){
            num =  n/2;
            C = C + 1;
        }else{
            num = n*3+1;
            C = C + 1;
        }
        n = num;
    }

    //4.
    cout << C;
    return 0;
}
