#include<iostream>
using namespace std;
class aaa{
    public :
    aaa(){
        cout<<"Default constructor"<<endl;
    }
    ~aaa(){
      cout<<"destructor ";
    }
};
void sam(){
    aaa k1,k2;
    cout<<"cool"<<endl;
    aaa k3;
    cout<<"Good"<<endl;
}
int main(){
    aaa m1;
    cout<<"Great"<<endl;
    sam();
    aaa m2;
    cout<<"Whatever"<<endl;
    return 0;
}
