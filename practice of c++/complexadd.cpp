#include<iostream>
#include<conio.h>
using namespace std;
class Complex{
    int x;
    int y;
    public:
    void setData(int p ,int q)
    {
x=p;
y=q;
    }
Complex add(Complex g1)

{
Complex h1;
h1.x = x+g1.x;
h1.y = y+g1.y;
return h1;
}
void display()
{
    cout<<x<<" "<<y<<" "<<endl;
}
};
int main()
{
Complex c1,c2,c3;
c1.setData(11,17);
c2.setData(23 ,43);
c3 =c1.add(c2);
c3.display();
    getch();
}