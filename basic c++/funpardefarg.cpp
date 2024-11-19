#include<iostream>
using namespace std;
void sam(int &r){    //pointer r - c++ introduce new feature we can pass parameter variable as default argument.
    r=100; // value of r assign to j &j = *r
}
int main()
{
    int j;
    j=30;
    sam(j); // calling sam - 
    cout<<j<<endl; // 100
}