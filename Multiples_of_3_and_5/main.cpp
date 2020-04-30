#include <iostream>

using namespace std;

int main()
{
    //1.
    long long int suma = 0;
    long long int i = 1;

    //3.
    while(i<1000){
        if(i%3 == 0 || i%5 == 0) suma = suma + i;

        i++;
    }

    //4.
    cout << suma;
    return 0;
}
