#include<iostream>
using namespace std;
template<class T1 , class T2>
class Whatever{
    private:
  T1 x;
  T2 y;
public:
void setX(T1 x);
void setY(T2 y);
T1 getX();
T2 getY();
};
template<class T1,class T2>
void Whatever<T1,T2>::setX(T1 x){
    this->x = x;
}
template<class T1,class T2>
void Whatever<T1,T2>::setY(T2 y){
    this->y= y;
}
template<class T1,class T2>
T1 Whatever<T1,T2>::getX(T1 x){
    return this->x ;
}
template<class T1,class T2>
void Whatever<T1,T2>::getY(T2 y){
   return  this->y;
}
int main(){
    Whatever<int,char> k;
    k.setX(19);
    k.setY('A');
    cout<<k.getX()<<endl;
    cout<<k.getY()<<endl;
    return 0;
}
