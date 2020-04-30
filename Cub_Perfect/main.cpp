#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int n = 0;
    long long int i = 1;  //cate nr am de citit
    long long int e_cub = 0;
    long long int x = 0;

    //2.
    cin >> n;

    //3.
   while(i<=n){
    cin >> x;
    if (x>0){
            int j = 1; //pt cub
            e_cub = 0;
            while(true){
                int c = 0;
                c = j*j*j;
                if(c==x){
                    e_cub = 1;
                    break;
                }
                if(c>x){
                    break;
                }
                j++;
            }
            if(e_cub ==1){
                cout << "DA" << endl;
            }else{
                cout << "NU" << endl;
            }

    }else{
            int j = -1; //pt. cub
            e_cub = 0;
            while(true){
                int c = 0;
                c = j*j*j;
                if(c==x){
                    e_cub = 1;
                    break;
                }
                if(c<x){
                    break;
                }
                j--;
            }
            if(e_cub ==1){
                cout << "DA" << endl;
            }else{
                cout << "NU" << endl;
            }



    }
   }



     return 0;
}

