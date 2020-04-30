#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("joc8.in");
ofstream fout("joc8.out");

long putere(long baza, long exponent){
    long p = 1;
    for(int i = 0; i<=exponent; i++){
        p = baza*baza;
    }
    return p;
}

int main()
{
    //1.
    long long int n = 0;
    long long int i = 1;
    long long int c = 0;
    long long int c1 = 0;
    long long int c2 = 0;
    long long int c3 = 0;
    long long int nr = 0;
    long long int alt = 0;
    long long int nrc = 0;
    long long int lama1 = 0;
    long long int lama2 = 0;
    long long int lama3 = 0;
    long long int lama4 = 0;

    //2.
    fin >> n;

    //3.
    while(i<=n){
        fin >> nr;
        long long int n2 = nr;
        long long int esterau = 0;
        nrc = 0;
        while(n2>0){
            c = n2%10;
            nrc = nrc + 1;
            n2/=10;
        }
        //cout << "nr = " << nr << " nrc = " << nrc << endl;
        if(nrc == 1){
            alt = alt + 1;
        }else if(nrc>2){
             //cout << putere(10,nrc) << endl;
            if(nrc%2 == 1){
                //cout << nr << " ";
                int k = 0;
                while(k<nrc-2){
                    //cout << lama1 << " " << lama2 << " " << lama3 << " " << lama4 << endl;
                    lama1 = putere(10,nrc-k)*10;
                    lama2 = lama1/10;
                    lama3 = lama2/10;
                    lama4 = lama3/10;
                    //cout << "lama1 = " << lama1 << " lama2 = " << lama2 << " lama3 = " << lama3 << " lama4 = " << lama4 << endl;
                    c1 = (nr%lama1)/lama2;
                    c2 = (nr%lama2)/lama3;
                    c3 = (nr%lama3)/lama4;
                    //cout << "c1 = " << c1 << " c2 = " << c2 << " c3 = " << c3 << endl;
                    //if(c2 == 0 || c3 == 0) break;
                    if((c2>c1 && c2>c3) || (c2<c1 && c2<c3)){
                    }else{
                        esterau = 1;
                    }


                    nr = nr/10;
                    k++;
                }

                //cout << "esterau = " << esterau << endl;


                if(esterau == 0) alt = alt + 1;
            }
        }
        i++;
    }

    //4.
    fout << alt << endl;
    return 0;
}
