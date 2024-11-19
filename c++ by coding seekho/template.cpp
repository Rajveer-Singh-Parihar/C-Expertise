#include<iostream>
#include<conio.h>
using namespace std;
template<class P> // template are used two take different datatype in same way takes float as float or int as int.
void fun1( P x, P y){
      P z = x+y;
    cout<<z;
}
int main()
{
    fun1(6,7);
    fun1(45.5,30.6);
}