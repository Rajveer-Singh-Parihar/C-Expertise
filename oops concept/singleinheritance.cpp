#include<iostream>
using namespace std;
class Rectangle{
    int length; // BY DEFAULT PROPERTIES ARE PRTIVATE
    int breadth ;
    public:
    void setLength(int e){
        length =e;
    }
    int getLength(){
        return length;
    }
    void setBreadth(int e){
        breadth =e;
    }
    int getBreadth(){
        return breadth;
    }
};
class Box : private Rectangle{ // BOX HAS 9 MEMBERS 3 PROPERTIES AND 6 METHODS
    int height;
    public:
    void setHeight(int e){
        height = e;
    }
    int getHeight(){
        return height;
    }
};
int main(){
    Box x; // x have space for length breadth and height
    x.setLength(10); // incorrect private box
    x.setBreadth(2); // incorrect private box
    x.setHeight(7);  // correct because private box
    cout<<"Length:"<<x.getLength()<<endl; // incorrect
    cout<<"Breadth :"<<x.getBreadth()<<endl; // incorrect
    cout<<"Height :"<<x.getHeight()<<endl; // correct
    return 0;
}