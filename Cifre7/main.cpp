#include <iostream>

using namespace std;

int main()
{
    //1.
    int n = 0;
    int k = 0;
    unsigned long long int p = 0;
    unsigned long long int i = 3;
    int t = 0;
    int cifrek = 0;
    int ultim = 0;

    //2.
    cin >> n >> k >> p;

    //3.
    int pred3 = 1;
    int pred2 = 1;
    int pred1 = 2;

    if(p == 1){
        ultim = 1;
    }else if(p == 2){
        ultim = 1;
    }else if(p == 3){
        ultim = 2;
    }else{
        while(i<p){
            //cout << "i=" << i << endl;
            //cout << "i=" << i << endl;
            //cout << endl << "##########%%$$$%%##########" << endl;
            int termen = (pred1 + pred2 + pred3)%10;
            ultim = termen;
            //cout << v[i] << ", ";
            //cout << termen << ", ";
            if(termen == k && i<=n){
                cifrek = cifrek + 1;
            }
            i++;
            pred3 = pred2;
            pred2 = pred1;
            pred1 = termen;
        }
    }

    //4.
    cout << cifrek << endl << ultim;
    return 0;
}
