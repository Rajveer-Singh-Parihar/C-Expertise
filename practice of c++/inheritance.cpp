#include<iostream>
using namespace std;
class aaa {
    public:
    void sam(){
        cout<<"hello"<<endl;
    }
};
class bbb: public aaa{
    public:
    void joy(){
        cout<<"Ram Ram"<<endl;
    }
};
class ccc: public aaa{
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
    ddd u;
    u.sam(); // class did't has member named as sam
}