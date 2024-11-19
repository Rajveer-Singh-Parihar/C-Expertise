#include<iostream>
using namespace std;
class aaa{
    public:
    aaa(){
        cout<<"Base class  (aaa) default Constructor "<<endl;
    }
    aaa(int e){
        cout<<"Base class (aaa) Parameterized Costructor"<<endl;
    }
    aaa(const aaa &v){
        cout<<"Base Class  (aaa)copy Constructor"<<endl;
    }
    aaa(aaa &&v){
        cout<<"Base classs(aaa) move constrcutor"<<endl;
    }
};
class bbb: public aaa{
public :
bbb(){
    cout<<"Derived class (bbb) Default Constructor";
}
bbb(const bbb &v){
    cout<<"Derived class (bbb) copy constructor will get called"<<endl;
}
};
int main(){
    bbb b1; // 
    cout<<"B1 is Created "<<endl;
    bbb b2(b1);
    cout<<"b2 Created"<<endl;
    bbb b3(move(b2));
    cout<<"b3 Created"<<endl;
    return 0;
}