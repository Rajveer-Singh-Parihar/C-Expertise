#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[5]; // allocating the memory through new keyword
    p[0] =22;
    p[1] =44;
    p[2]=45;
    p[3]=77;
    p[4]=898;
    int i;
    for(i=0;i<=4;i++){
        cout<<p[i]<<endl;
    }
    delete [] p; // releasing the memory through delete
    return 0;
}