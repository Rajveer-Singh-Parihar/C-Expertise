#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    int x ;
    static int y; // static variable are not in object memory they are created there own memory
    public:
     static void setdata() // static function
    {
        y=5;
    }
    static void display() // static function
    {
        cout<<y;
    }
};
int demo::y;
int main(){

    demo ::setdata ();
    demo :: display();
}