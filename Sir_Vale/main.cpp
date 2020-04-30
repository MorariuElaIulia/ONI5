#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int n = 0;
    long long int i = 0;
    long long int t = 0;
    long long int rau = 0;
    long long int coborare = 1;

    //2.
    cin >> n;
    int v[n];

    //3.
    while(i<n){
        cin >> t;
        v[i] = t;
        i++;
    }

    if(n == 3){
        if(v[1]>=v[2] && v[2]<=v[3]){
            cout << "DA";
        }else{
            cout << "NU";
        }
    }else{
        for(int i = 0; i<n - 1; i++){
            //daca suntem la coborare
            if(coborare == 1){
                if (v[i]>=v[i+1]){
                    //totul e ok
                }else{
                    if(i == 0 || i == n - 1){
                        rau = 1;
                    }else{
                        if(i>0 && i<n-1){
                            coborare = 0;
                        }
                    }
                }
            }else{
                if (v[i]<=v[i+1]){
                    //totul e ok
                }else{
                    rau = 1;
                    break;
                }
            }
            //cout << "coborare = " << coborare << endl;
            }

        if (rau==0){
            cout << "DA";
        }else{
            cout << "NU";
        }
    }

    return 0;
}
