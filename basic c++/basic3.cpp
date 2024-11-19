#include<iostream>
using namespace std;
int main()
{
    int x ;
    int *y = &x; // manalo y pe koi addreess rakha hoga
    x=10;
    cout<<*y<<endl; // x value y ke memory address pe kardo - output - 10
    *y = 55;
    cout<<x<<endl; //x pe new value aa gayi - 55
    return 0;

}