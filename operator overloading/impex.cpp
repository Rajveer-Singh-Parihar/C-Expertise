#include<Iostream>
using namespace std;
class aaa{
    public:
    aaa(){
        cout<<"Constructor"<<endl;
    }
    ~aaa(){
        cout<<"Destructor"<<endl;
    }
    aaa & operator=(const aaa &other){ // copy assignment
     cout<<"Operator = copy assignment"<<endl;
     return *this;
    }
};
aaa doSomething(){
    cout<<"Dosomething is get called"<<endl;
    aaa k;
    return k;
}
int main(){
    aaa a;
    cout<<"Dosomething is ready to get called"<<endl;
    a =doSomething();
    cout<<"main is about to get end"<<endl;
    return 0;
}