#include<iostream>
using namespace std;
class aaa{
    public:
    int operator()(int x, int y){
        return x+y;
    }
};
int main(){
    aaa a;
    int x = a(10,20); // this is posiible because of callable object
    cout<<x<<endl;
    return 0;
}