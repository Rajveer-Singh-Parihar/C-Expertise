#include<iostream>
using namespace std;
int main()
{
    int x; // here we are changing the value assigning the value x to y and y to x 
    int &y=x; // we declaring that y is an alias(urf) of x.
    x=10;
    cout<<" the value of y"<<y<<endl; // output - 10
    y=55;
    cout<<" the value of x"<<x<<endl; // oupur - 55
    return 0;
}