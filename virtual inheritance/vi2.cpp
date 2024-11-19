#include<iostream>
using namespace std;
class aaa{
    public:
    aaa(){
        cout<<"Base class default Constructor "<<endl;
    }
    aaa(int e){
        cout<<"Base class Parameterized Costructor"<<endl;
    }
    aaa(const aaa &v){
        cout<<"Base Class copy Constructor"<<endl;
    }
    aaa(aaa &&v){
        cout<<"Base classs move constrcutor"<<endl;
    }
};
class bbb: public aaa{

};
int main(){
    bbb b1;
    bbb b2(b1);
    bbb b3(move(b2));
    return 0;
}