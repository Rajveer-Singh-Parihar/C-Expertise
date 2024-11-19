// TEMPLATE IS POWERFUL FEATURE USED TO WRITE GENERIC PROGRAMS.
// THERE ARE MANINLY TWO TYPES OF TEMPLATE 1] CLASS TEMPLATE 2] FUNCTION TEMPLATE .
#include<iostream>
using namespace std;
template <class T>
T add(T a , T b){
    return a+b;
}

int main(){
    cout<<add<int>(3,4)<<endl;
    cout<<add<float>(3.5,5.6)<<endl;
    return 0;
}
