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
bbb(int e):aaa(e){
cout<<"Derived class paramterized Constructor"<<endl;
}
};
int main(){
 bbb b(20);
 return 0;
}