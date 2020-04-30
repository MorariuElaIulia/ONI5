#include <iostream>

using namespace std;

int main()
{
    //1.
    int v[5];
    int j = 1;
    int n = 5;
    int suma = 0;


    //citim lista
    int i = 0;
    while(i<n)
    {
        cin >> v[i];
        i++;
    }


    //3.
    while(j<=3)
    {//de trei ori

        int poz = 0;
        int maxi = 0;
        int i = 0;

        while(i<n){
            //pt fiecare element
            if(v[i]>maxi)
            {
                poz = i;
                maxi = v[i];
            }
            i++;
        }

        suma = suma + maxi;
        v[poz] = 0;

        j++;
    }

    //4.
    cout << suma;

    return 0;
}
