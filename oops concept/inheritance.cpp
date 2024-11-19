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
class Box : public Rectangle{ // BOX HAS 9 MEMBERS 3 PROPERTIES AND 6 METHODS
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
    Box x;
    x.setLength(10);
    x.setBreadth(2);
    x.setHeight(7);
    cout<<"Length:"<<x.getLength()<<endl;
    cout<<"Breadth :"<<x.getBreadth()<<endl;
    cout<<"Height :"<<x.getHeight()<<endl;
    return 0;
}