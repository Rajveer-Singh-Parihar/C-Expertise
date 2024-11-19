/*
- A method whose name is identical to the class name and which does not have a return type is called a constructor method.
- There are several types of constructor.
- Constructor gets called as soon as an object of the class gets created.
- Constructor gets called implicitely the neccessary code to invoke the constructor is introduced by the compiler.
- Constructor cannot be called explicitely . ( CANNOT CALLED BY THE PROGRAMMER).
*/
#include<iostream>
using namespace std;
class aaa{
    public:
    aaa() // constructor gets created - same name as class name
    {
      cout<<"Default constructor"<<endl; // 1 - 3
    }
};
int main()
{
    aaa a1;
    cout<<"god is great"<<endl; // 2
    aaa a2;
    return 0;
}