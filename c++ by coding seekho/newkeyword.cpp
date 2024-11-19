// Static memory allocation - compile time pe memory allocate
// Dynamic memory allocation - run time pr memory allocate.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *k;
    k= new int ;
    *k = 34;
    cout<<*k; 
    int *p;
    p = new int[5];
    *(p+3) = 81;
    *(p+0) = 2;
    *p = 71;
    cout<<*(p+0);

    delete k;
    delete []p;

    getch();
}