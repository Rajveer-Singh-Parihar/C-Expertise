#include<iostream>
using namespace std;
template<class T>
T getSquare(T x){
    T y;
    y = x*x;
    return y;
}
int main(){
    cout<<getSquare(12)<<endl;
    cout<<getSquare(2.2)<<endl;
    return 0;
}