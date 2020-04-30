#include <iostream>

using namespace std;

int main()
{
    //1.
    int n = 0;
    int k = 0;
    int r = 0;
    int pred = 0;
    int i = 1;
    int sumapare = 0;
    float sumak = 0;
    float sumar = 0;
    float media = 0;

    //2.
    cin >> n >> k >> r;

    //3.
    while(i<=n){
        //cout << endl;
        int j = pred;
        //cout  << "i=" << i << endl;
        if(i%2==0){
            sumapare = sumapare + 1;
        }

            while(j<pred+i){
                if(i==k){ sumak = sumak + j; }
                if(i==r){ sumar = sumar + j; }
                j++;
            }
            pred = j;
            i++;
        }


    cout << sumapare << endl;
    //cout << "sumak=" << sumak << " " << "sumar=" << sumar << endl;
    media = (sumak + sumar)/(k+r);
    cout << media << endl;
    return 0;
}
