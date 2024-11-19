#include<iostream>
using namespace std;
template<class T>
T getSquare( T x){
    T y;
    y = x*x;
    return y;
}
int main(){
    int a;
    float b;
    double c;
    a = getSquare(10);
    b = getSquare(4.4f);
    c= getSquare(5.8);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}