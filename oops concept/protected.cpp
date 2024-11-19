#include<iostream>
using namespace std;
class Base{
    protected:
    int a,b;
    public:
    void Show(){
        a=10; b=20;
        cout<<a<<ends<<b<<endl;
    }
};
class Derive:protected Base{ // access we use public instead of protected
    public:
    void Disp(){
        a=30; b=40;
        cout<<a<<ends<<b<<endl;
    }
};
int main(){
    Derive obj;
    obj.Disp();
    obj.Show(); // cant access because protected
}