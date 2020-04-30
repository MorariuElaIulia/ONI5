#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("multimi2.in");
ofstream fout("multimi2.out");
int main()
{
    //Cerinta 1
    //1.
    long long int N = 0;
    long long int M = 0;
    long long int im = 0;
    long long int in = 0;
    long long int sm = 0;
    long long int sn = 0;
    long long int p = 0;
    long long int nrter = 0;
    long long int nrter2 = 0;
    long long int nr = 0;
    long long int i = 1;

    //2.
    fin >> p >> N >> in >> M >> im;

    //3.
    nrter = N-1;
    nrter2 = M-1;

    sn = in + nrter;
    sm = im + nrter2;

    //Printarea rezultatului
    if(p==1){
        //cout << "im=" << im <<  "  " << "sm=" << sm << endl;
        //cout << "in=" << in <<  "  " << "sn=" << sn << endl;
        if(in<sm){


            int i=im;
            while(i<=in){
                fout << i << " ";
                i = i + 1;
            }

            i = in;
            while(i<=sm){
                fout << i << " ";
                i = i + 1;
            }

            i=sm;
            while(i<=sn){
                fout << i << " ";
                i = i + 1;
            }

        }
        if(sm<in){


            i = im;
            while(i<=sn){
                fout << i << " ";
                i = i + 1;
            }
        if(im<sn){

            i = in;
            while(i<=im){
                fout << i << " ";
                i = i + 1;
            }

            i = im;
            while(i<sm){
                fout << i << " ";
                i = i + 1;
            }


            i = sn;
            while(i<sm){
                fout << i << " ";
                i = i + 1;
            }
        if(in<sm){

            i = in;
            while(i<=sm){
                fout << i << " ";
                i = i  +  1;
            }

        }
        }
        }
        }else{
            //cout << "im=" << im << " " << "sm=" << sm << endl;
            //cout  << "ihn=" << in << " " << "sn=" << sn << endl;
            int start = 0;
            if (in<im) start = im;
            else start = in;

            int stop = 0;
            if (sn<sm) stop=sn;
            else stop = sm;

            int i=start;
            while(i<=stop) {
                fout<< i<< " " ;
                i++;
            }


        }




    return 0;
}
