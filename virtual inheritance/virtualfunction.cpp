#include<iostream>
using namespace std;
class aaa{
    public:
    void sam(){
        cout<<"Great"<<endl;
    }
    virtual void tom(){ // only one copy pass which copy pass depends on compiler 

    }
};
class bbb : public aaa{
    public:
    void tom(){
        cout<<"Cool"<<endl;
    }
};
int main(){
    aaa *p;
p = new bbb;
p->sam();
p->tom();
return 0;
}