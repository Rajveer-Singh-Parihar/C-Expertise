#include<iostream>
using namespace std;
class aaa{
    public:
    aaa(int e){
        cout<<"Base class (aaa) Parameterized Costructor"<<endl;
    }
};
class bbb: public aaa{
public :
bbb():aaa(10){
    cout<<"Derived class (bbb) Default Constructor";
}
bbb(const bbb &v):aaa(100){
    cout<<"Derived class (bbb) copy constructor will get called"<<endl;
}
};
int main(){
 bbb b;
 return 0;
}