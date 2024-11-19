#include<iostream>
#include<conio.h>
using namespace std;
class Example2; // declaration of class that this class can be created in the future.
class Example1{
    int x;
    public:
    void fun1(){

    }
    friend void fun3(Example1 t1 ,Example2 t2);
};
class Example2{
    int y;
    public:
    void fun2(){

    }
    friend void fun3(Example1 t1 ,Example2 t2);
};
void fun3(Example1 t1 ,Example2 t2)
{
t1.x=5;
t2.y =4;
cout<<t1.x+t2.y;
}
int main()
{
Example1 e1;
Example2 e2;
fun3(e1,e2);
}