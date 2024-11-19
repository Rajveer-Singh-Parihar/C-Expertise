#include<iostream>
using namespace std;
template<class T1, class T2>
class Whatever{
    private:
     T1 x;
     T2 y;
     public:
     void setX(T1 x){
        this -> x = x;
     }
      void setY(T2 y){
        this -> y = y;
     }
T1 getX(){
    return this-> x;
}
T2 getY(){
return this-> y;
}
};
int main(){
    Whatever <int ,char> k;
    k.setX(19);
    k.setY('A');
    cout<<k.getX()<<endl;
    cout<<k.getY()<<endl;
    return 0;
}