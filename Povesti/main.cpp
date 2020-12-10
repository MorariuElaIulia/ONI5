#include <iostream>

using namespace std;

long nrcif(int n){
    int nrc = 0;
    for(int n2 = n; n2 > 0; n2 /= 10) nrc++;
    return nrc;
}

long putere(int baza, int exponent){
    long p = 1;
    for(int i = 0; i < exponent; i++){
        p = p * baza;
    }
    return p;
}

int main()
{
    //1.
    long long int n = 0;
    long long int c = 0;
    long long int k = 0;
    long long int P = 0;
    int x = 1;
    long long int nrc = 0;
    int nrcx = 0;
    long long int Psus = 0;
    long long int Pjos = 0;
    long long int Pmaxi = 0;
    long long int lama1 = 0;
    long long int lama2 = 0;
    long long int pagina = 0;
    long long int cate_cifre = 1;

    //2.
    cin >> n;
    nrc = nrcif(n);
    int v[nrc];
    k = nrc - 1;
    nrc = 1;

    //3.
    /*
    for(int i = 1; i < n + 1; i ++){
        nrc = nrcif(i);
        cate_cifre = cate_cifre + nrc;
    }

    for(int i = 1; i < n + 1; i ++){
            nrc = nrcif(i);
            cate_cifre = cate_cifre + nrc;
    }
    */

    if(n < 10){
        cate_cifre = n + 1;
    }else if(n < 100){
        cate_cifre = 10 + n - 10;
    }

    for(int n2 = n; n2 > 0; n2 /= 10){
        c = n2%10;
        v[k] = c;
        k--;
    }

    nrc = nrcif(n);

    for(int i = 1; i < nrc - 1; i++){
        Psus = 0;
        Pjos = 0;
        P = 1;

        for(int j = 0; j < i; j++){
            Psus = Psus * 10 + v[j];
        }

        for(int j = i + 1; j < nrc; j++){
            Pjos = Pjos * 10 + v[j];
        }


        P = Psus * Pjos;
        /*
        cout << "i = " << i << " v[i] = " << v[i] << endl;
        cout << "v[i-1] = " << v[i-1] << " v[i+1] = " << v[i+1] << endl;
        cout << Psus << " " << Pjos << endl;
        */

        if(P > Pmaxi) Pmaxi = P;
    }


    //4.
    cout << Pmaxi << " " << cate_cifre << endl;
    return 0;
}
