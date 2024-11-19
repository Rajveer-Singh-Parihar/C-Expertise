#include<iostream>
using namespace std;
class aaa{
    public:
    void sam(){
        cout<<"Great"<<endl;
    }
    void tom(){

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
    p -> tom(); // calling aaa class tom mso no output
    return 0;
}