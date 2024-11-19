#include<iostream>
using namespace std;
class aaa
{
    public:
    aaa(const aaa &v)
    {
        cout<<"copy constructor"<<endl;
    }
    aaa(const aaa &&v)
    {
        cout<<"move constructor"<<endl;
    }
};
int main()
{
    aaa a; // default constructor 
    return 0;
}