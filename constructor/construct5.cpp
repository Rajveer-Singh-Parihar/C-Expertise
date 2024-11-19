#include<iostream>
using namespace std;
class aaa
{
    public:
    aaa(int e)
    {
        cout<<"Parameterized constructor"<<endl;
    }
};
int main()
{
    aaa a1(1000);
    aaa a2; // either we use default , copy and move
    return 0;
}