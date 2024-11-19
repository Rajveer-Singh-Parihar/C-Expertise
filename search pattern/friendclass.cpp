// FRIEND CLASS - FRIEND CLASS CAN ACCESS PRVATE AND PROTECTED MEMBER OF CLASS OF THE CLASS WHICH IS DECLARED AS A FRIEND.
#include<iostream> // the following code will not compile
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
friend class utility;
};
class Fridge{
    int price; // by default private 
    public:
    void askInformation(){
        cout<<"Enter a price :";
        cin>>price;
    }
    void printInformation(){
        cout<<"price is:"<<endl;
    }
    friend class utility;
};
class utility{
    public:
    void printTotalCost(TV &a , Fridge &b){
        cout<<"Total Cost is"<<(a.price + b.price)<<endl; // price is private so we cant acess price 
    }
    void CostDifference(TV &a , Fridge &b){
        if(a.price == b.price){
            cout<<"Cost Of tv and fridge is same"<<endl;
        }
        else if(a.price>b.price){
            cout<<"Cost of tv is more than fridge by"<<(a.price-b.price)<<endl;
        }
        else{
            cout<<"Cost of fridge is more than that TV by"<<(b.price-a.price)<<endl;
        }
    }
};
int main(){
    TV t;
    t.askInformation();
    Fridge f;
    f.askInformation();
    utility u;
    u.printTotalCost(t,f);
    u.CostDifference(t,f);
    return 0;
}