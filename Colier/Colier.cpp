#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("colier.in");
ofstream fout("colier.out");

long putere(int baza, int exponent){
    long p = 1;
    for(int i = 0; i<exponent; i++){
        p = p*baza;
    }
    return p;
}

int main()
{
        //Cerinta 1
        //1.
        int T = 0;
        int N = 0;
        int nr = 0;
        int cmax = 0;
        int cmin = 0;
        int nrc = 0;
        int lama1 = 0;
        int lama2 = 0;
        int i = 0;
        int c = 0;
        int nrn = 0;
        int j = 0;
        int cmax_gasit = 0;
        int cmin_gasit = 0;
        int c1 = 0;
        int c2 = 0;
        int bune = 0;
        int tip = 0;
        int tippred = 0;
        int margele = 0;

        //2.
        fin >> T >> N;
        int ci[N];
        margele = N;
        //cout << "N = " << N << endl;

        //3.
        while(i<N){
            fin >> nr;
            nrc = 0;
            nrn = 0;
            cmax_gasit = 0;
            cmin_gasit = 0;
            cmax = 0;
            cmin = 10;
            j = 0;

            for(int nr2 = nr; nr2>0; nr2/=10){
                c = nr2%10;
                //cout << "c = " << c << endl;
                nrc = nrc + 1;
            }
            //cout << "nr = " << nr<< endl;
            //cout << "nrc = " << nrc << endl;

            lama1 = putere(10,nrc);
            lama2 = lama1/10;
            //cout << "lama1 = " << lama1 << " lama2 = " << lama2 << endl;

            int v[nrc];

            for(int x = 0; x<nrc; x++){
                v[x] = 0;
            }

            for(int nr2 = nr; nr2>0; nr2%=lama1){ //cout << "#######" << endl;
                c = (nr2%lama1)/lama2;
                v[j] = c;
                //cout << "lama1 = " << lama1 << endl;
                //cout << "nr2 = " << nr2 << endl;
                //cout << "c = " << c << endl;
                if(c>=cmax) cmax = c;
                if(c<=cmin) cmin = c;
                lama1/=10;
                lama2/=10;
                j++;
            }

            //cout << "cmax = " << cmax << " cmin = " << cmin << endl;

            for(int k = 0; k<nrc; k++){
                //cout << "v[k] = " << v[k] << endl;
                if(v[k] == cmax && cmax_gasit == 0){
                    nrn = nrn*10 + cmax;
                    cmax_gasit = 1;
                }

                if(v[k] == cmin && cmin_gasit == 0){
                    nrn = nrn*10 + cmin;
                    cmin_gasit = 1;
                }

            }

            c1 = (nrn%100)/10;
            c2 = nrn%10;
            //cout << "c1 = " << c1 << " c2 = " << c2 << endl;

            if(c1<c2) bune = bune + 1;

            //cout << "nr = " << nr << " nrn = " << nrn << endl;
            ci[i] = nrn;
            //cout << "cmax = " << cmax << " cmin = " << cmin << endl;
            i++;
        }

        c1 = ci[0]/10;
        c2 = ci[0]%10;
        if(c1<c2){
            tippred = 1;
        }else{
            tippred = 2;
        }
        for(int i = 1; i<N; i++){
            //cout << "ci[i] = " << ci[i] << endl;
            if(ci[i] > 0){
                c1 = ci[i]/10;
                c2 = ci[i]%10;
                if(c1<c2){
                    tip = 1;
                }else{
                    tip = 2;
                }


            if(tip == tippred){
                margele = margele - 1;
                ci[i] = 0;
            }
            if(i == N-1){
                //cout << i << endl;
                c1 = ci[N-1]/10;
                c2 = ci[N-1]%10;
                //cout << "ci[i] = " << ci[i] << " c1 = " << c1 << " c2 = " << c2 << endl;
                if(c1<c2){
                    tip = 1;
                }else{
                    tip = 2;
                }
                int c3 = ci[0]/10;
                int c4 = ci[0]%10;
                if(c3<c4){
                    tippred = 1;
                }else{
                    tippred = 2;
                }

                if(tippred == tip) margele = margele - 1;

            }
            }
            tippred = tip;
        }


        //4.
        if(T == 1){
            fout << bune << endl;
        }else{
            fout << margele << endl;
        }
    return 0;
}
