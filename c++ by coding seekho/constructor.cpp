#include<iostream>
#include<conio.h>
using namespace std;
class exam{
    // ~ exam(){ cout<<" destructor";} - used to deallocate / decentrailized exam memory
    int x,y; // by default garbage value in x and y
    public:
    exam(int p , int q)// parameterized constructor
    {
     x=p;
     y=q;
    }
    exam(exam &g1){ // & - reference variable -> Copy CONSTRUCTOR
    g1.x++;
    g1.y++;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }

};
int main()
{
    exam e1(6,9);
    exam e2(7,2);
    exam e3(e1);
    e1.display();
}