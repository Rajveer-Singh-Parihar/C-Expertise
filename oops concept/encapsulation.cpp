/*
ENCAPSULATION -> Hiding the internals of an object 
- object stays in valid sate
- example - bulb , capsule etc.

SOME DEFINATION ACCORDING WHICH NOT CORRRECT 
- DATA HIDING IS ENCAPSULATION.
- BINDING DATA AND MEMEBER FUNCTION TOGETHER ON A SINGLE UNIT.
*/

#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    void setLength(int x){
        if(x>0){
            length = x;
        }
        else{
            length = 1;
        }
    }
    void setBreadth(int x){
     if(x>0){
            length = x;  // our program amy terminate the application
        }                 // by calling the exit function
        else{
            length = 1;
        }
    }
    int getLength(){
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getArea(){
        return length*breadth;
    }
};
int main(){
    Rectangle r1; // r1 and r2 are objects
    r1.setLength(-10); // so the value is -10 so output is negative and object invalid state so we use provide length as one  output 4
    r1.setBreadth(4);
    cout<<"Length :"<<r1.getLength()<<endl;
    cout<<"Breadth :"<<r1.getBreadth()<<endl;
    cout<<"Total area :"<<r1.getArea()<<endl;
    return 0;
}