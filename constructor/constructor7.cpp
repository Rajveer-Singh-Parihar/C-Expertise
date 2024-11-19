#include<iostream>
using namespace std;
class aaa{
    public:
    aaa(int e)
    {
        cout<<"parameterized Constructor"<<endl;
    }
    aaa(const aaa &&v)
    {
        cout<<"move Constructor"<<endl; // default and parameterized
    }
};
int main()
{
    aaa a;
    return 0;
}