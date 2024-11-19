#include<iostream>
using namespace std;
void sam(int x){ // call by value / the acutal value of j is passed
    x=100;
}
int main()
{
    int j;
    j=30;
    sam(j); // calling the function sam
    cout<<j<<endl;  // 30
    return 0;
}