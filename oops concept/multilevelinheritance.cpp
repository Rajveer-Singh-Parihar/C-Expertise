#include<iostream>
using namespace std;
class aaa{
    public:
    void sam(){
        cout<<"Great"<<endl;
    }
};
class bbb{
    public:
    void tom(){
        cout<<"Cool"<<endl;
    }
};
class ccc: public aaa , public bbb{
    public:
    void tiger(){
        cout<<"Whatever"<<endl;
    }
};
int main(){
    ccc c;
    c.sam();
    c.tom();
    c.tiger();
    return 0;
}