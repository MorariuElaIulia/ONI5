#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("vale.in");
ofstream fout("vale.out");

long putere(int baza, int exponent){
    long p = 1;
    for(int i = 0; i<exponent; i++){
        p = p*baza;
    }
    return p;
}

int main()
{
    //1.
    int n = 0;
    int nr = 0;
    int i = 0;
    int c1 = 0;
    int c2 = 0;
    int lama1 = 0;
    int lama2 = 0;
    int bune = 0;
    int rele = 0;

    //2.
    fin >> n;

    //3.
    while(i<n){
        fin >> nr;
        //cout << "nr = " << nr << endl;
        int nrc = 0;
        int rau = 0;
        int c = 0;
        int coborare = 1;
        for(int nr2 = nr; nr2>0; nr2/=10){
            nrc = nrc + 1;
        }
        //cout << "nrc = " << nrc << endl;
        if(nrc>=3){
            int v[nrc];
            int descresc = 0;
            lama1 = putere(10, nrc);
            lama2 = lama1/10;
            //cout << "lama1 = " << lama1 << " lama2 = " << lama2 << endl;
            for(int i = 0; i<nrc; i++){
                c = (nr%lama1)/lama2;
                //cout << "c = " << c << endl;
                v[i] = c;
                lama1 = lama1/10;
                lama2 = lama2/10;
            }

            for(int i = 0; i<nrc-1; i++){
                descresc = 0;
                if(v[i]-1 == v[i+1]){
                    descresc = 1;
                }else{
                    break;
                }
                //cout << "descresc = " << descresc << endl;
            }

            if(descresc == 0){

                for(int i = 0; i<nrc-1; i++){
                    if(coborare == 1){
                        //cout << "v[i] = " << v[i] << " v[i+1] = " << v[i+1] << endl;
                        if(v[i]>v[i+1]){
                            //totul e ok:)
                            //cout << "ok" << endl;
                        }else{
                            if(i == 0 || i == nrc - 1){
                            rau = 1;
                        }else{
                            if(i>0 && i<nrc-1){
                                coborare = 0;
                            }
                        }
                        }
                    }else{
                        //cout << "v[i] = " << v[i] << " v[i+1] = " << v[i+1] << endl;
                        if(v[i]<v[i+1]){
                            //totul e ok:)
                            //cout << "OK" << endl;
                        }else{
                            rau = 1;
                            //cout << "rau" << endl;
                        }
                    }
                }
                if(rau == 1){
                    rele = rele + 1;
                }else{
                    fout << nr << " ";
                    bune = bune + 1;
                }
            }
            }
        i++;
    }

    //4.
    if(bune == 0){
        fout << "Nu sunt numere vale";
    }else{
        fout << endl << bune << endl;
    }
    return 0;
}
