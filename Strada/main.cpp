#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Strada.in");
ofstream fout("Strada.out");
int main()
{
    //1.
    int x = 0;
    int y = 0;
    int z = 0;

    //2.
    fin>>x>>y>>z;
    fout<<"El a vazut in total: " <<(x+y+z)<<" persoane.";
    fout<<endl;

    //3.
    if(x>y){
        if(x>z){
            fout<<"Mircea a vazut in prima ora mai multe persoane.";
        }
    }else{
        if(y>z){
            fout<<"Mircea a vazut in a doua ora mai multe persoane.";
        }else{
            fout<<"Mircea a vazut in a treia ora mai multe persoane.";}
    return 0;
}
}
