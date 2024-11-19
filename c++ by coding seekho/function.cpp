// function is nothing but a block of code 
// there are mainly two types of function 1] Pre-defined function 2] user defined function
/* 
mukesh(){ - FUNCTION DEFINATION
cout<<"a";
}
rahul(){
cout<<"b";
}
int main(){
mukesh(); - FUNCTION CALLING IN C++
rahul();
rahul();
}

-- HOW A FUNCTION RETURNS A VALUE ----
#include<iostream>
#include<conio.h>
using namespace std;
float fun1(){
return 56.78;
}
int main(){
fun1();
}
*/

#include<iostream>
using namespace std;
int add(int p ,int q){
    return(p+q);
}
int main(){
    int sum;
    sum = add(100,50);
    cout<<"the sum of two number is : "<<sum;
    return 0;
}