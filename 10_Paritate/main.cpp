#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Paritate.in");
ofstream fout("Paritate.out");
int main()
{
    //1.
    int n1 = 0;
    int n2 = 0;
    int c1 = 0;
    int c2 = 0;
    int a1 = 0;
    int a2 = 0;
    int nr = 0;
    int num = 0;

    //2.
    fin >> n1 >> n2;

    //3.
    c1 = n1%10;
    c2 = (n1/10)%10;
    a1 = n2%10;
    a2 =  (n2/10)%10;


    if((n1%2==0 && n2%2==0) || (n1%2==1 && n2%2==1)){
        //DA
        if(c1%2==0){
            nr = nr + 1;
        }
        if(c2%2==0){
            nr = nr + 1;
        }
        if(a1%2==0){
            nr = nr + 1;
        }
        if(a2%2==0){
            nr = nr + 1;
        }
        fout << "Numarul total de cifre pare este: " << nr;
    }else{
        if(c1%2==1){
            num = num + 1;
        }
        if(c2%2==1){
            num = num + 1;
        }
        if(a1%2==1){
            num = num + 1;
        }
        if(a2%2==1){
            num = num + 1;
        }
        fout << "Numarul total de cifre inpare este: " << num;

        }


    return 0;
}
