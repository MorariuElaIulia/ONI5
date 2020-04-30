#include <iostream>

using namespace std;

long putere(long baza, int exponent){
    //cout << "baza=" << baza << " exponent="<<exponent<<endl;
    long p = 1;
    for(int i = 0; i<exponent; i++){
        p = p*baza;
    }
    //cout<<"p="<<p<<endl;
    return p;
}

int main()
{
    //1.
    int a = 0;
    int b = 0;
    int c = 0;
    int nrct = 0;
    int nrca = 0;
    int nrcb = 0;
    int maxi = 0;
    int index = 0;
    long long int putere1 = 1;
    long long int putere2 = 1;

    int lama1 = 1;
    int lama2 = 1;
    int lama12 = 0;

    //2.
    cin >> a >> b;
    //cout << "a = " << a << " b = " << b << endl;
    int a2 = a;
    int b2 = b;

    //3.
    while(a2>0){ // aflam cate cifre are a
        c = a2%10;
        nrca = nrca + 1;
        a2/=10;
    }

    putere1 = putere(10,nrca);
    putere2 = putere1/10;


    while(b2>0){ // aflam cate cifre are b
        c = b2%10;
        nrcb = nrcb + 1;
        b2/=10;
    }
    //cout << "a are " << nrca << " cifre si b are " << nrcb << " cifre." << endl;

    lama1 = putere(10,nrcb);
    lama2 = lama1/10;
    lama12 = lama1;
    //cout << "putere1 = " << putere1 << " putere2 = " << putere2 << endl;
    //cout << "lama1 = " << lama1 << " lama2 = " << lama2 << endl;



    int va[nrca];
    int vb[nrcb];
    int v[10];
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    v[4] = 0;
    v[5] = 0;
    v[6] = 0;
    v[7] = 0;
    v[8] = 0;
    v[9] = 0;

    for(int x = 0; x<nrca; x++){
        c = (a%putere1)/putere2;
        va[x] = c;
        //cout << va[x] << ", ";
        putere1 = putere1/10;
        putere2 = putere2/10;
    }
    for(int j = 0; j<nrcb; j++){
        c = (b%lama1)/lama2;
        vb[j] = c;
        //cout << vb[j] << ", ";
        lama1 = lama1/10;
        lama2 = lama2/10;
    }

    for(int  k = 0; k<nrca; k++){
        for(int i = 0; i<nrcb; i++){
            if(va[k] == vb[i]){
                if(v[k] == 0){
                    cout << va[k] << " ";
                    v[k] = 1;
                }
            }
        }
    }

    nrct = nrca + nrcb;
    int vt[nrct];
    int nrn = 0;
    long long int rez = 0;

    nrn = a*lama12 + b;

    for(int j = 0; j<nrct; j++){
        vt[j] = nrn%10;
        cout << "vt[j] = " << vt[j] << endl;
        nrn = nrn/10;
    }

    cout << endl;
    for(int i = 0; i<nrct; i++){
        maxi = 0;
        for(int j = 0; j<nrct; j++){
            if(vt[i]>maxi){
                maxi = vt[i];
                cout << "i = " << i << endl;
                cout << "maxi = " << maxi << endl;
                index = i;
            }
        }
        //cout << index << " ";
        rez = rez*10 + vt[i];
        vt[index] = -1;
    }
    cout << endl << rez << endl;
    return 0;
}
