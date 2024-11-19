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
    friend istream & operator>>(istream & , Toy &);
};
ostream & operator<<(ostream &w , Toy &e){
    w<<e.getPrice();
    return w;
}
istream & operator>>(istream &w , Toy &e){
    w>>e.price;
    return w;
}
int main(){
    Toy t;
    cout<<"Enter A price :";
    cin>>t;
    cout<<t<<endl;
    return 0;
}