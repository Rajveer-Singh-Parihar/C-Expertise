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
        cout<<"Derived Class Destructor"<<endl; // here the derived class destructor wont be executed 
    }
};
int main(){
    aaa *a;
    cout<<"Great"<<endl;
    a =new bbb;
    cout<<"cool"<<endl;
    delete a;
    cout<<"Main is About to end"<<endl;
    return 0;
}
   