#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public:
    void f1()
    {
        cout<<"fun1 executed"; // overloading
    }
    void f1(int x){
        cout<<"fun 2 executed"; // function hiding - overloading
    }
};
class B{
    public:
    void f1()
    {
        cout<<" child 1 executed"; // function overriding 
    }
};
int main()
{
    B a1;
    a1.f1();
}