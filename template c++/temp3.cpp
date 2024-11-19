#include<iostream>
using namespace std;
int getSquare(int x){
    int y;
    y = x*x;
    return y;
}
float getSquare(float x){
    float y;
    y = x*x;
    return y;
}
double getSquare(double x){
    double y;
    y = x*x;
    return y;
}
int main(){
    int a ;
    float b;
    double c;
    a = getSquare(10);
    b = getSquare(2.5f); // if we need a floating point square then we need to write thew square 
    c= getSquare(5);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;

}