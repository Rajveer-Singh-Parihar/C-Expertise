#include<iostream>
using namespace std;
class Toy{
    private:
    int price;
    public:
    void setPrice(int price){
        this->price = price;
    }
    int getPrice(){
        return this->price;
    }
    int operator <(Toy &w){
        if(this->price<w.price){
            return 1;
        }
        else{
            return 0;
        }
    }
    int operator >(Toy &w){
        if(this->price>w.price){
            return 1;
        }
        else{
            return 0;
        }
    }
    int operator ==(Toy &w){
        return this->price == w.price;
    }

};
int main(){
    Toy t1 , t2;
    t1.setPrice(10000);
    t2.setPrice(50304);
    if(t1<t2){
        cout<<"Price of t1 is less than t2";
    }
    if(t1>t2){
        cout<<"Price of t1 is greater than t2";
    }
    if(t1==t2){
        cout<<"Price of t1 is equal  to t2";
    }
    return 0;
}
