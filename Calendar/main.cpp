#include <iostream>

using namespace std;

int main()
{
    //1.
    int a = 0;
    int l = 0;
    int z = 0;

    //2.
    cin >> z >> l >> a;

    //3.
    if(a%4 == 0 && a<=2500){
        if(l == 2){
            if(z<=29){
                cout << "DA";
            }else{
                cout << "NU";
            }
        }else{

    if(z<=31){
        if(l<=12){
            if(a<=2500){
                cout << "DA";
            }else{
                cout << "NU";
            }
        }else{
            cout << "NU";
        }
        }else{
            cout << "NU";
        }
    }

    }else{
        cout << "NU";
    }

    return 0;
}
