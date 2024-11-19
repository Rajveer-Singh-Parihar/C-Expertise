#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    void setLength(int x){
        length =x;
    }
    void setBreadth(int x)
    {
        breadth =x;
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
    Rectangle r1,r2; // r1 and r2 are objects
    r1.setLength(10);
    r1.setBreadth(4);
    r2.setLength(7);
    r2.setBreadth(5);
    cout<<"Length :"<<r1.getLength()<<endl;
    cout<<"Breadth :"<<r1.getBreadth()<<endl;
    cout<<"Total area :"<<r1.getArea()<<endl;
    cout<<"Length :"<<r2.getLength()<<endl;
    cout<<"Breadth :"<<r2.getBreadth()<<endl;
    cout<<"Total area :"<<r2.getArea()<<endl;
    return 0;
}