#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public:
   virtual void f1() // virtual keyword se child chalega that why we create virtual function - (late binding)
    {
    cout<<"Parent Function";
    }
};
class B : public A{
    public:
    void f1()
    {
     cout<<"Child function";
    }
};
int main(){
    A *a1; // * - pointer
    B b1;
    a1 = &b1;// address (100) - a1 me
    a1->f1();
}