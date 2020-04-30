#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("covid19.in");
ofstream fout("covid19.out");

long calc_min(int zc,int lc,int oc,int mc){
    cout << "z=" << zc << " lc=" << lc << " oc=" << oc << " mc=" << mc << endl;
    long minute = 0;
    long mlc = 0;
    long moc = 0;
    if(lc == 2) mlc = 24*60*31 + (zc-1)*1440 + oc*60 + mc;
    if(lc == 3) mlc = 24*60*(29+31) + (zc-1)*1440 + oc*60 + mc;
    if(lc == 4) mlc = 24*60*(31+29+31) + (zc-1)*1440 + oc*60 + mc;
    if(lc == 5) mlc = 24*60*(30+31+29+31) + (zc-1)*1440 + oc*60 + mc;
    if(lc == 6) mlc = 24*60*(31+30+31+29+31) + (zc-1)*1440 + oc*60 + mc;
    if(lc == 7) mlc = 24*60*(30+31+30+31+29+31) + (zc-1)*1440 + oc*60 + mc;
    if(lc == 8) mlc = 24*60*(31+30+31+30+31+29+31) + (zc-1)*1440 + oc*60 + mc;
    if(lc == 9) mlc = 24*60*(31+31+30+31+30+31+29+31) + (zc-1)*1440 + oc*60 + mc;
    if(lc == 10) mlc = 24*60*(30+31+31+30+31+30+31+29+31) + (zc-1)*1440 + oc*60 + mc;
    if(lc == 11) mlc = 24*60*(31+30+31+31+30+31+30+31+29+31) + (zc-1)*1440 + oc*60 + mc;
    if(lc == 12) mlc = 24*60*(30+31+30+31+31+30+31+30+31+29+31) + (zc-1)*1440 + oc*60 + mc;
    cout << "mlc=" << mlc << endl;
    //cout << "mzc = " << mzc << " mlc = " << mlc << " moc = " << moc << " mc = " << mc << endl;
    //cout << "minute = " << minute << endl;
    return mlc;
}


int main()
{
    //1.
    int z = 0;
    int l = 0;
    int a = 0;
    int o = 0;
    int m = 0;
    unsigned long long int mini = 10000000000;
    long mini_minute_data_contact = 0;

    int zc = 0;
    int lc = 0;
    int ac = 0;
    int oc = 0;
    int mc = 0;
    int n = 0;
    int i = 1;
    int zcar = 0;
    int ocar = 0;
    int mcar = 0;
    int sc = 0;
    unsigned long long int scar = 0;

    unsigned long long int mzc = 0;
    unsigned long long int mlc = 0;
    unsigned long long int moc = 0;
    unsigned long long int mmc = 0;

    unsigned long long int mz = 0;
    unsigned long long int ml = 0;
    unsigned long long int mo = 0;
    unsigned long long int mm = 0;

    //2.
    fin >> zc >> lc >> ac >> oc >> mc >> n;
    long minute_data_curenta = calc_min(zc,lc,oc,mc);
    //3.
      //cout << "mzc=" << mzc << " mlc=" << mlc << " moc=" << moc << " mmc=" << mmc << endl;

    while(i<=n){
        fin >> z >> l >> a >> o >> m;

        long minute_data_contact = calc_min(z,l,o,m);
        long diff_minute = minute_data_curenta - minute_data_contact;

        cout  << "minute_data_contact=" << minute_data_contact << endl;
        if(diff_minute < mini){
            mini = diff_minute;
            mini_minute_data_contact = minute_data_contact;
            cout << "mini=" << mini <<endl;
        }
        i++;
    }




    scar = 14*1440 - (minute_data_curenta - mini_minute_data_contact);
    cout << "scar=" << scar << endl;



    zcar = scar/1440;
    ocar = (scar%1440)/60;
    mcar = (scar%1440)%60;

    //4.
    fout << zcar << " " << ocar << " " << mcar;
    return 0;
}
