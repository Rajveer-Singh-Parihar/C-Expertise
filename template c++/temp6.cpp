#include<iostream>
using namespace std;
template<class T>
T add(T a, T b){
    T c;
    c=a+b;
    return c;
}
int main(){
    cout<<"Total of"<<10<<"And"<<20<<"is"<<add(10,20)<<endl;
    cout<<"Total of"<<10.2<<"And"<<20.4<<"is"<<add(10.2,20.4)<<endl;
    return 0;
}