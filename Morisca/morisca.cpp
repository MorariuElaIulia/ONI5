#include <iostream>

using namespace std;

int main()
{
    //1.
    int n = 0;
    int spatii = 0;
    int stelute = 0;
    int i = 1;
    int n2 = 0;
    int n3 = 0;

    //2.
    cin >> n;
    //cout << "n = " << n << endl;

    //3.
    //cout << "n3 = " << n3 << " n2 = " << n2 << endl;
    //cout << "i = " << i << " n2 = " << n2 << endl;

    stelute = 1;

    for(int i = 1; i<=n; i++){
        spatii = 3*n - 2*stelute;
        //cout << "stelute = " << stelute << endl;
        for(int i = 0; i<stelute; i++){
            cout << "*";
        }
        //cout << "spatii = " << spatii << endl;
        for(int i = 0; i<spatii; i++){
            cout << " ";
        }
        //cout << "stelute = " << stelute << endl;
        for(int i = stelute; i>0; i--){
            cout << "*";
        }
        cout << endl;
        //cout << "per linie:" << prlin << endl;
        stelute = stelute + 1;
    }

    for(int i = 0; i<n; i++){
        spatii = 3*n - 2*stelute;
        //cout << "spatii = " << spatii << endl;
        for(int i = 0; i<n; i++){
            cout << " ";
        }
        //cout << "stelute = " << stelute << endl;
        for(int i = 0; i<n; i++){
            cout << "*";
        }
        //cout << "spatii = " << spatii << endl;
        for(int i = 0; i<n; i++){
            cout << " ";
        }
        cout << endl;
    }

    stelute = n;
    spatii = n;

    for(int i = 0; i<n; i++){
        //cout << "stelute = " << stelute << endl;
        for(int i = stelute; i>0; i--){
            cout << "*";
        }
        //cout << "spatii = " << spatii << endl;
        for(int i = 0; i<spatii; i++){
            cout << " ";
        }
        //cout << "stelute = " << stelute << endl;
        for(int stelute2 = stelute; stelute2>0; stelute2--){
            cout << "*";
        }
        cout << endl;
        //cout << "per linie:" << prlin << endl;
        spatii = n*3 - 2*(stelute-1);
        stelute = stelute - 1;
    }
    return 0;
}
