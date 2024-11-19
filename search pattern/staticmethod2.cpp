#include<iostream>
using namespace std;
class TV{
    int price; // by default member are private
    public:
    void askInformation(){
        cout<<"Enter Price :";
        cin>>price;
}
void printInformation(){
    cout<<"Price is :"<<endl;
}
};
class Fridge{
    int price;
    public:
    void askInformation(){
        cout<<"Enter a price :";
        cin>>price;
    }
    void printInformation(){
        cout<<"price is:"<<endl;
    }
};
int main(){
    TV t;
    t.askInformation();
    Fridge f;
    f.askInformation();
    int totalCost;
    totalCost = t.price + f.price; // the code will not compile beacuse the price is not accerssible
    cout<<"Total Cost of Tv and fridge is :"<<totalCost<<endl;
    return 0;
}