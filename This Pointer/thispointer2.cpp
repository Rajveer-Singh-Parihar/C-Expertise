#include<iostream>
using namespace std;
class aaa{
    public:
    void sam(){
        cout<<"Great"<<endl;
    }
};
class bbb : public aaa{
    public:
    void tom(){
        cout<<"cool"<<endl;
    }
};
int main(){
    aaa *p;
    p = new bbb;
    p -> sam();
    p -> tom(); // this is incorrect because p doesnt now who is tom
    return 0;
}