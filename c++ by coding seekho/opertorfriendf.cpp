#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    int x,y;
    public:
    void setData(int p , int q){
        x=p;
        y=q;
    }
    void display(){
        cout<<x<<""<<y;
    }
   friend demo operator +(demo f1, demo f2);
};
demo operator +(demo f1, demo f2){
        demo g1;
        g1.x = f1.x + f2.x;
        g1.y = f1.y + f2.y;
        return g1;
    }
    int main()
    {
        demo d1,d2,d3;
        d1.setData(45,35);
        d2.setData(25,20);
        d3 = d1+d2;
        d3.display();

    }