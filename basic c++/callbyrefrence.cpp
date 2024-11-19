#include<iostream>
using namespace std;
void sam(int *p){ // address of j is passed 
    *p = 100;  // here the new value of j-100
}
int main()
{
    int j ;
    j=30;
    sam(&j); // address of j is passed
    cout<<j<<endl; // 100
    return 0;

}