#include <iostream>

using namespace std;

int main()
{
    //1.
    int n = 0;
    int s = 0;
    int i = 1;
    int nrmin = 1;
    int m = 0;
    int nrminc = 0;
    int nrmin_10 = 0;
    int sumanumere = 0;

    //2.
    cin >> n >> s;

    //3.
    while(i<n){
        nrmin = nrmin*10;
        i++;
    }
    //cout << "nrmin=" << nrmin << endl;

    nrmin_10 = nrmin*10;
    while(nrmin<nrmin_10){ //Pentrru fiecare numar
        //cout << "####################################" << endl;
        nrminc = nrmin;

        int suma = 0;

        while(nrminc>0){
            int c = 0;
            c = nrminc%10;
            suma = suma + c;


            nrminc = nrminc/10;
            //cout << "nrmin=" << nrmin << " " << "c=" << c << " " << "suma=" << suma << endl;
        }

        if(suma==s) {
            cout << nrmin << " ";
            sumanumere = sumanumere + 1;
        }

        nrmin++;
    }

    //4.
    if(sumanumere==0){
        cout << "0";
    }else{
        cout << endl << sumanumere;
    }



    return 0;
}
