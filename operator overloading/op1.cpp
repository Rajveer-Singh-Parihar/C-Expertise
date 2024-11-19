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
    void operator = (int e){
        this -> price = e;
    }
};
int main(){
    Toy t;
    t=1000;
    cout<<t.getPrice()<<endl;
    return 0;
}