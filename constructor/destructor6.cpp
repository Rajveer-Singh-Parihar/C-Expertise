#include<iostream>
using namespace std;
class aaa{
    public:
    aaa(){
        cout<<"Base class Deafult constructor"<<endl;
    }
    ~aaa(){
        cout<<"Base class Destructor"<<endl;
    }
};
class bbb : public aaa{
    public:
    bbb(){
        cout<<"Derived class Deafult Constructor"<<endl;
    }
    ~bbb(){
        cout<<"Derived Class Destructor"<<endl;
    }
};
int main(){
    bbb *b;
    cout<<"Great"<<endl;
    b =new bbb;
    cout<<"cool"<<endl;
    delete b;
    cout<<"Main is About to end"<<endl;
    return 0;
}
   