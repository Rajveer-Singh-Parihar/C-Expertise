#include<iostream>
using namespace std;
class aaa
{
    public:
    aaa() // constructor - same name as class name
    {
    cout<<"default constructor"<<endl;
    }
    aaa(int e)
    {
        cout<<"parameterized constructor"<<endl;
    }
};
int main()
{
    aaa a1;
    cout<<"god is great"<<endl;
    aaa a2;
    cout<<"ujjain is the city of god"<<endl;
    aaa a3(100);
    cout<<"i live in kheda kasoon"<<endl;
    aaa a4;
    cout<<" program is about to end"<<endl;
    return 0;
}