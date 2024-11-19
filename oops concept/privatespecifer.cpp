#include<iostream>  // member access kar sakte hai
using namespace std; // friends access kar sakte hai
class A{
    private :
    int a,b;
    public:
    void Show( ){
        a=10 ; b=20;
        cout<<a<<ends<<b<<endl;
    }
    friend class B;
};
class B{
public:
void Disp(A ref){
    ref.a=30; ref.b=40;
    cout<<ref.a<<ends<<ref.b;
}
};
int main(){
    A obj; 
    obj.Show();
    B obj2;
    obj2.Disp(obj);
}