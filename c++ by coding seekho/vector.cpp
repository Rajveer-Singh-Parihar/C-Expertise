// VECOTR ARE USED TO STORE THE THE DATA . THE SIZE OF VECTOR IS INCREASE BY DOUBLE .
#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
vector<int>v1;
v1.push_back(11);
v1.push_back(22);
v1.push_back(33);
v1.push_back(31);
v1.push_back(110); // CAPACITY VECTOR IS 8
v1.pop_back(); // To remove the last data 110
int i;
for(i=0;i<v1.size();i++)
{
    cout<<v1[i]<<" ";
}
}