/*
POLYMORPHISM -> Existence of process in many forms which process can get executed depends on input.
- the multiple forms should be in a single unit .
*/
#include<iostream>
using namespace std;
void doSomething(int a , char b) // same name but different parameter
{
cout<<a<<b<<endl;
}
void doSomething(int p , int q) // same name with same parameter
{
cout<<p<<q;
}
int main()
{
    doSomething(10,'A');
    doSomething(12,34);
    return 0;
}