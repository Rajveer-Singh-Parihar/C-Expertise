#include<iostream>
using namespace std;
class Bulb{
    private:
    int wattage;
    int price;
    public:
    void setWattage(int wattage){
        this->wattage = wattage;
    }
    void setPrice(int price){
        this->price =  price;
    }
    int getWattage(){
        return this->wattage;
    }
    int getPrice(){
        return this->price;
    }
    Bulb & operator = (const Bulb &other){ // copy assignment
        cout<<"Operator = (const Bulb &) got called"<<endl;
        this->wattage = other.wattage;
        this->price = other.price;
    }
    Bulb & operator = ( Bulb &&other){ // move  assignment - 2nd time also the move only gets called
        cout<<"Operator = ( Bulb &&) got called"<<endl;
        this->wattage = other.wattage;
        this->price = other.price;
        return *this;
    }
};
int main(){
    Bulb b1,b2;
    b1.setWattage(60);
    b1.setPrice(100);
    b2=b1;
    cout<<b2.getWattage()<<endl;
    cout<<b2.getPrice()<<endl;
    b2 = move(b1);
    cout<<b2.getWattage()<<endl;
    cout<<b1.getPrice()<<endl;
    cout<<b1.getWattage()<<endl;
    cout<<b1.getPrice()<<endl;
    
}