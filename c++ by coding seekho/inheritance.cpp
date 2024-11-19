/*
whenever one class define from another class it aquires all the properties other class is called inheritance
1] parent - super , base
2] child - sub , derived
five types of inheritance - single , multiple , multi- level , hierarchical , hybrid
*/
#include<iostream>
#include<conio.h>
using namespace std;
class samsung1{
    public: // if we dont write public then both the members are come private  by default
int x,y;
void f1() // we can access the private variable through public function.
{
x=5;
}
void f2()
{
y=2;
}
};
class samsung2 : public samsung1{
    int z;
    public:
    void f3()
    {
    z=9;
    }
    void f4(){
        cout<<x<<" "<<y<<" "<<z;
    };
};
class samsung3 : public samsung2{
int a,b;
public:
void f5(){

}
};
int main(){
    samsung2 s1;
    s1.f1();
    s1.f2();
    s1.f3();
    s1.f4();
}