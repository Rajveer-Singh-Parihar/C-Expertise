#include<iostream>
using namespace std;
class Toy{
    private:
    int price;
    public:
    void setPrice(int price){
        this->price=price;
    }
    int getPrice(){
        return this->price;
    }
    void operator ++(){ // this for prefix
        this->price = this->price+100;
    }
    void operator ++(int){ // this for postfix
        this->price = this->price+200;
    }
};
int main(){
    Toy t1 , t2;
    t1.setPrice(1000);
    t2.setPrice(1000);
    ++t1;
    t2++;
    cout<<t1.getPrice()<<endl;
    cout<<t2.getPrice()<<endl;
    return 0;
}