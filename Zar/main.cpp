#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("zar.in");
ofstream fout("zar.out");
int main()
{
    int x = 0; fin >> x;
    if(x == 1){
        //PRIMA CERINTA
        //1.
        int n1 = 0;
        int n2 = 0;
        int n3 = 0;
        int n4 = 0;
        int n5 = 0;
        int n6 = 0;
        int maxi_pastram = 0;
        int mini_pastram = 100;
        int i = 1;

        //3.
        while(i<=4){
            int nr_pastram = 0;
            int maxi = 0;
            int mini = 10;
            fin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
            if(n1>maxi) maxi = n1;
            if(n2>maxi) maxi = n2;
            if(n3>maxi) maxi = n3;
            if(n4>maxi) maxi = n4;
            if(n5>maxi) maxi = n5;
            if(n6>maxi) maxi = n6;

            if(n1<mini) mini = n1;
            if(n2<mini) mini = n2;
            if(n3<mini) mini = n3;
            if(n4<mini) mini = n4;
            if(n5<mini) mini = n5;
            if(n6<mini) mini = n6;
            //cout << maxi << " " << mini << endl;

            nr_pastram = (mini*10) + maxi;
            //cout << nr_pastram << endl;
            if(nr_pastram>maxi_pastram) maxi_pastram = nr_pastram;
            if(nr_pastram<mini_pastram) mini_pastram = nr_pastram;
            i++;
        }

        //4.
        fout << mini_pastram << " " << maxi_pastram;





    }else if(x == 2){

        //CERINTA A DOUA

        int n1 = 0;
        int n2 = 0;
        int n3 = 0;
        int n4 = 0;
        int n5 = 0;
        int n6 = 0;
        int maxi_pastram = 0;
        int mini_pastram = 0;
        int i = 1;
        int suma = 0;

        i = 1;
        while(i<=4){
            int nr_pastram = 0;
            int prod = 1;
            int maxi = 0;
            int mini = 10;
            fin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
            if(n1>maxi) maxi = n1;
            if(n2>maxi) maxi = n2;
            if(n3>maxi) maxi = n3;
            if(n4>maxi) maxi = n4;
            if(n5>maxi) maxi = n5;
            if(n6>maxi) maxi = n6;

            if(n1<mini) mini = n1;
            if(n2<mini) mini = n2;
            if(n3<mini) mini = n3;
            if(n4<mini) mini = n4;
            if(n5<mini) mini = n5;
            if(n6<mini) mini = n6;
            //cout << mini << " " << maxi << " ";

            nr_pastram = (mini*10) + maxi;
            //cout << nr_pastram << " ";
            while(nr_pastram>0){
                int c = nr_pastram%10;
                prod = prod*c;
                suma = suma + prod;
                //cout << prod << endl;
                nr_pastram = nr_pastram/10;
            }
            i++;
        }

        //4.
        fout << suma;






    }else if(x == 3){

        int n1 = 0;
        int n2 = 0;
        int n3 = 0;
        int n4 = 0;
        int n5 = 0;
        int n6 = 0;
        int maxi = 0;
        int mini = 10;
        int maxi_pastram = 0;
        int mini_pastram = 0;
        int i = 1;
        int div = 1000;


        //1.
        int pred = 2;

        i = 1;
        while(i<=4){
            int nr_pastram = 0;
            fin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
            if(n1>maxi) maxi = n1;
            if(n2>maxi) maxi = n2;
            if(n3>maxi) maxi = n3;
            if(n4>maxi) maxi = n4;
            if(n5>maxi) maxi = n5;
            if(n6>maxi) maxi = n6;

            if(n1<mini) mini = n1;
            if(n2<mini) mini = n2;
            if(n3<mini) mini = n3;
            if(n4<mini) mini = n4;
            if(n5<mini) mini = n5;
            if(n6<mini) mini = n6;

            nr_pastram = (mini*10) + maxi;
            i++;

        }

        int nr = (mini*100) + maxi + 1;
        i = 2;
        while(i<=nr){
            int pred2 = pred;
            int sumpred = 0;
            int i2 = 1;
            int sumai = 0;

            while(pred2>0){
                int cpred = pred2%10;
                sumpred = sumpred + cpred;
                pred2 = pred2/10;
            }

            while(i2>0){
                int ci = i2%10;
                sumai = sumai + ci;
                i2 = i2/10;
            }

            if(sumpred<sumai){
                div = sumai;
            }else{
                div = sumpred;
            }
        }

        //4.
        fout << div;

    }
    return 0;
}
