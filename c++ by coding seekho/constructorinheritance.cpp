#include<iostream>  // constructor - calling sequence - child to parent 
using namespace std; // constructor - execution sequence - parent to child
class A{
    int s;
    public:
    A(int g){
        s=g;
        cout<<"PArent Constructor"; // if we create an object so first parent constructor will execute in any ways.
    }
    ~A()
    {
        cout<<" Parent destructor";
    }
};
class B : public A{
    public:
    B(int p) : A(p)
    {
        cout<<"Child Constructor";
    }
    ~B()
    {
        cout<<" Child destructor"; // execution done child to parent
    }
};
int main()
{
    B b1(6);
}