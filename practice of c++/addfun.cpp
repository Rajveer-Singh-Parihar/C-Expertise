#include<iostream>
#include<conio.h>
using namespace std;
int add(int p,int q){
    int r = p+q;
    return r;
}
int main()
{
int a,b;
cout<<" enter two numbers";
cin>>a>>b;
int z =add(a,b);
cout<<"addition is"<<z;
getch();
}