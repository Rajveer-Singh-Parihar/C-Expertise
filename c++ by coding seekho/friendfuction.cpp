/*
FRIEND FUNCTION -> Friend Function is a function which is the member of the class instead it can acccess priate and protected member of class.
- friend function is declare in the class with friend keyword.
- friend function can become friend to more than one class.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Example{
    int x,y;
    public:
    void fun(){
        
    }
friend void fun1();
};
void fun1(){
Example e1;
e1.x=5;
e1.y=7;
cout<<e1.x<<""<<e1.y;
}
int main()
{
    fun1();
    
}