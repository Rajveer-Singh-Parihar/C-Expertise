//  TO ASSIGN MORE THAN ONE OPERATION TO AN OPERATOR IS KNOWN AS OPERATOR OVERLOADING.
#include<iostream>
using namespace std;
class Toy{
    private:
    int price;
    public:
    void setPrice(int price){
        this->price = price;
    }
    int gertPrice(){
        return this->price;
    }
    friend int operator <(Toy & , Toy &);
    friend int operator >(Toy & , Toy &);
    friend int operator ==(Toy & , Toy &);
};
int operator<(Toy &e1 , Toy&e2){
    return e1.price<e2.price;
}
int operator>(Toy &e1 , Toy&e2){
    return e1.price>e2.price;
}
int operator==(Toy &e1 , Toy&e2){
    return e1.price==e2.price;
}
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
