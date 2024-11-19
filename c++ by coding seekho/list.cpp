#include<iostream>
#include<conio.h>
#include<list>
using namespace std;
int main()
{
list<int>l1{5,66,77,44,55,33};
l1.sort();
list<int>::iterator i1=l1.begin();
while(i1 != l1.end())
{
    cout<<*i1<<" ";
    i1++;
}
}