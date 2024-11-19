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
};
ostream & operator<<(ostream &w , Toy &e){
    w<<e.getPrice();
    return w;
}
int main(){
    Toy t;
    t.setPrice(1000);
    cout<<t<<endl;
}