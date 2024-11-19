#include<iostream>
using namespace std;
void doSomething(int x=3){  // default value x =3
    cout<<x*x<<endl;
}
int main()
{
    doSomething(10); // if we pass the value in dosomething then 10 is taken as x
    doSomething();   // if we dont pass any value inside doSomething function then default value 3 is taken
}