#include <iostream>

using namespace std;

int main()
{
    //1.
    long int n = 0;
    unsigned long long int C = 1;
    long int z = 0;
    long int m = 0;
    long int i = 1;

    //2.
    cin >> n;

    //3.
    while(i<n){
        //cout << "################" << endl;


        //cout << "i=" << i << endl;
        C = C + (i*6);
        i = i + 1;
    }

    //4.
    cout << C;






    return 0;
}
