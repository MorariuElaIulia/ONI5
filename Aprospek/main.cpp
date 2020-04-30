#include <iostream>

using namespace std;

int main()
{
    //1.
    unsigned long long int n = 0;
    unsigned long long int k = 0;
    unsigned long long int k2 = 0;
    unsigned long long int a = 0;
    unsigned long long int b = 0;
    unsigned long long int i = 1;
    unsigned long long int caz_special = 0;
    unsigned long long int caz_special1 = 0;

    //2.
    cin >> n >> k;

    //3.
    if(n == k){
        cout << k;
    }else if(n%k == 0){
        caz_special = n ;
        cout << caz_special;
    }else{
        while (true)
        {
            int m = k*i;
            if(m>n) break;
            i++;
        }

        a = k*i - n;
        b = n - k*(i-1);

        if(a>=b){
            cout << k*(i-1);
        }else{
            cout << k*i;
        }
    }
    return 0;
}
