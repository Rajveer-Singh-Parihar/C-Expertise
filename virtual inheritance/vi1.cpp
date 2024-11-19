#include<iostream> // virtal inheritance means passing one copy of actual value from a multiple value
using namespace std;
class aaa {
    public:
    void sam(){
        cout<<"hello"<<endl;
    }
};
class bbb: virtual public aaa{
    public:
    void joy(){
        cout<<"Ram Ram"<<endl;
    }
};
class ccc: virtual public aaa{
    public:
    void tony(){
        cout<<"Jay Shree Mahakal"<<endl;
    }
};
class ddd:  public bbb , public ccc{
    public:
    void kalia(){
        cout<<"Kalia Prasad"<<endl;
    }
};
int main(){
    ddd d;
    d.sam(); // only one class executed which depends on compiler 
    return 0;
}