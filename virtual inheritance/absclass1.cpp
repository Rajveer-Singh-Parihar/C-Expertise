// the following code is being written by amit
#include<iostream>
using namespace std;
class Car{
    public:
    virtual void manual()=0;
};
class CarSeriviceStation{
public:
void doService( Car *c){
    // read manual of some reference
    c->manual();
}
};
// following code is being written by amit
class Salty: public Car{
void manual(){
    cout<<"Service of car is done on price 5000";
}
};
int main()
{
    Salty s;
    CarSeriviceStation serviceStation;
    serviceStation.doService(&s);
    return 0;
}