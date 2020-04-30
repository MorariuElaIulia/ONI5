#include <iostream>

using namespace std;

int main()
{
    //1.
    int n = 0;
    int m = 0;
    int rez = 0;

    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    int a1 = 0;
    int a2 = 0;
    int a3 = 0;

    int cmax = -1;
    int amax = -1;
    int cmin_dif_0 = 99;
    int amin = 99;
    int amin_dif_0 = 99;
    int cmin = 99;

    //2.
    cin >> n >> m;

    //3.
    c3 = n%10;
    c2 = (n/10)%10;
    c1 = (n/100)%10;
    //cout << "c1 = " << c1 << " " << "c2 = " << c2 << " " << "c3 = " << c3 << endl;

    a3 = m%10;
    a2 = (m/10)%10;
    a1 = (m/100)%10;
    //cout << "a1 = " << a1 << " " << "a2 = " << a2 << " " << "a3 = " << a3 << endl;



    if (c1<cmin) cmin = c1;
    if (c2<cmin) cmin = c2;
    if (c3<cmin) cmin = c3;

    if (c1>cmax) cmax = c1;
    if (c2>cmax) cmax = c2;
    if (c3>cmax) cmax = c3;

    if (c1<cmin_dif_0 && c1>0) cmin_dif_0 = c1;
    if (c2<cmin_dif_0 && c2>0) cmin_dif_0 = c2;
    if (c3<cmin_dif_0 && c3>0) cmin_dif_0 = c3;

    if (a1<amin) amin = a1;
    if (a2<amin) amin = a2;
    if (a3<amin) amin = a3;

    if (a1>amax) amax = a1;
    if (a2>amax) amax = a2;
    if (a3>amax) amax = a3;

    if (a1<amin_dif_0 && a1>0) amin_dif_0 = a1;
    if (a2<amin_dif_0 && a2>0) amin_dif_0 = a2;
    if (a3<amin_dif_0 && a3>0) amin_dif_0 = a3;

    if (cmax>amax){
        cout << cmax << amax << " ";
    }else{
        cout << amax << cmax << " ";
    }


    //cout<<endl << cmin << " " << cmin_dif_0 << " " << amin << " " << amin_dif_0 << endl;

    if (cmin<=amin && cmin!=0){
        cout << cmin << amin;

    }else if (amin<cmin && amin!=0){
        cout << amin<< cmin;

    } else if (amin==0){
        if (amin_dif_0<cmin){
            cout <<amin_dif_0<<cmin;
        }else{

            if (cmin>0){
                cout <<cmin<<amin;
            }else{
                cout << cmin_dif_0 << amin;
            }
        }
    } else if (cmin==0){
        if (cmin_dif_0<amin){
            cout <<cmin_dif_0<<amin;
        }else{

            if (amin!=0){
                cout << amin << cmin;
            }else{
                cout << amin_dif_0<<cmin;
            }
        }
    }


    return 0;
}
