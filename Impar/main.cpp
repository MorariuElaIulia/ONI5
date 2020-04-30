#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("impar.in");
ofstream fout("impar.out");

int main()
{
    //1.
    int n = 0;
    int c = 0;
    int lama1 = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    int nrc = 0;
    int nou = 0;
    int impare = 0;

    //2.
    fin >> n;

    //3.
    for(int n2 = n; n2>0; n2/=10){
        c = n2%10;
        nrc = nrc + 1;
    }
    //cout << nrc << endl;


    if(n == 0){
        fout << 1 << endl;
    }else{
        if(nrc == 1){
            if(n%2 == 0) nou = n + 1;
            if(n%2 == 1){
                fout << "CIFRE IMPARE";
                impare = 1;
            }
        }else if(nrc == 2){
            c1 = n/10;
            c2 = n%10;
            if(c2%2 == 0){
                c2 = c2 + 1;
            }else{
                if(c1%2 == 0){
                    c1 = c1 + 1;
                }else{
                    impare = 1;
                    fout << "CIFRE IMPARE";
                }
            }
            nou = (nou*10 + c1)*10 + c2;
        }else if(nrc == 3){
            c1 = n/100;
            c2 = (n%100)/10;
            c3 = n%10;
            //cout << c1 << " " << c2 << " " << c3 << endl;
            if(c3%2 == 0){
                c3 = c3 + 1;
            }else{
                if(c2%2 == 0){
                    c2 = c2 + 1;
                }else{
                    if(c1%2 == 0){
                        c1 = c1 + 1;
                    }else{
                        impare = 1;
                        fout << "CIFRE IMPARE";
                    }
                }
            }
            nou = ((nou*10 + c1)*10 + c2)*10 + c3;
        }else if(nrc == 4){
            c1 = n/1000;
            c2 = (n%1000)/100;
            c3 = (n%100)/10;
            c4 = n%10;
            if(c4%2 == 0){
                c4 = c4 + 1;
            }else{
                if(c3%2 == 0){
                    c3 = c3 + 1;
                }else{
                    if(c2%2 == 0){
                        c2 = c2 + 1;
                    }else{
                        if(c1%2 == 0){
                            c1 = c1 + 1;
                        }else{
                            impare = 1;
                            fout << "CIFRE IMPARE";
                        }
                    }
                }
            }
            nou = (((nou*10 + c1)*10 + c2)*10 + c3)* 10 + c4;
        }

        //4.
        if(impare == 0){
            fout << nou << endl;
        }
    }
    return 0;
}
