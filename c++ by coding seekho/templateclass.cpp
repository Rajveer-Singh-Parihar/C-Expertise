#include<iostream>
#include<conio.h>
using namespace std;
template <typename P , typename Q>// template are used to create generic function
class Demo
{
    P x;
    Q y;
    public:
    void f1(P a, Q b)
    {
    cout<<a+b;
    }
};
int main()
{
    Demo<int , double>d1;
    d1.f1(5.1,77.1);
}