#include<iostream>
using namespace std;
class Toy{
    private:
    int price ;
    public: 
    void setPrice(int price){
        this->price = price;
    }
    int getPrice(){
        return this->price;
    }
    int operator = (int e){
        this -> price = e;
    }
};
int main(){
    Toy t1,t2,t3;
    t1=t2=t3=1000;
    cout<<t1.getPrice()<<endl;
    cout<<t2.getPrice()<<endl;
    cout<<t3.getPrice()<<endl;
    return 0;
}