#include<iostream>
using namespace std;
class aaa{
    public:
    aaa(){
        cout<<"Default Constructor"<<endl;
    }
    ~aaa(){
        cout<<"Destructor"<<endl;
    }
};
int main(){
    aaa *p;
    cout<<"Great"<<endl;
    p=new aaa;
    cout<<"Cool"<<endl;
    delete p;
    cout<<"whatever"<<endl;
    return 0;
}
