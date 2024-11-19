#include<iostream>
using namespace std;
class aaa{
    public:
    aaa(){
        cout<<"Default Constructor"<<endl;
    }
    aaa(int e){
        cout<<"parameterized Constructor"<<endl;
    }
    aaa(const aaa &other){
        cout<<"copy Constructor "<<endl;
    }
    aaa(aaa &&other){
        cout<<"Move Constructor"<<endl;
    }
};
int main(){
    aaa a1=10;
    aaa a2;
    aaa a3 = a2;
    aaa a4 = move(a3);
    return 0;
}