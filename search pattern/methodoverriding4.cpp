#include<iostream>
using namespace std;
class aaa{
    public:
    void sam(){
        cout<<"cool"<<endl;
    }
};
class bbb{
    public:
    void tom(); // here we define the tom
};
void bbb::tom(){
    cout<<"Great"<<endl;
}
int main(){
    aaa a;
    a.sam();
    bbb b;
    b.tom();
    return 0;
}