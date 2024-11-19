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
};
void printTotalCost(TV &a , Fridge &b){ // here ew are creating alias of tv and fridge 
    int totalCost;
    totalCost = a.price + b. price; // price is private so we cant access it
    cout<<"total Cost of tv and Fridge is :"<<totalCost<<endl;
}
int main(){
    TV t;
    t.askInformation();
    Fridge f;
    f.askInformation();
    printTotalCost(t,f); // alias
    return 0;
}