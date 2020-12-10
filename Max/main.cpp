#include <iostream>

using namespace std;

long divizori(int n){
    int div = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            div++;
        }
    }
    return div;
}

int main()
{
    //1.
    int n = 0;
    int v[10000];
    int petale = 0;
    int divizor = 0;
    int nectar = 0;

    //2.
    cin >> n;

    //3.
    v[0] = 1;
    v[1] = 1;

    for(int i = 2; i < 10000; i++){
        if(v[i] == 0){
            for(int j = 2; j < 10000 / i; j++){
                v[j*i] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cin >> petale;
        int special = 0;

        divizor = divizori(petale);

        if(divizor == 0) continue;

        if(divizor % 2 == 1 && v[petale] == 1){
            nectar = nectar + petale * 3;
            special = 1;
        }else if(special == 0 && divizor > 0 && v[petale] == 1){
            nectar = nectar + petale;
        }
    }

    //4.
    cout << nectar << endl;

    return 0;
}
