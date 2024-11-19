#include<iostream> // the following code will not compile
using namespace std;
class Tv{
    int price; // by default member are private
    public:
    void askInformation(){
        cout<<"Enter A price";
        cin>>price;
    }
    void printInformation(){
        cout<<"price :"<<endl;
    }
};
class Fridge{
    int price;
    public:
    void askInformation(){
        cout<<"Enter price "<<endl;
        cin>>price;
    }
    void printInformation(){
        cout<<price<<endl;
    }
};
int main(){
    Tv t;
    t.askInformation();
    Fridge f;
    f.askInformation();
    int totalCost;
    totalCost = t.price + f.price; // here price is not accessible because by default memeber are public
    cout<<"Total  cos of tv and fridge is"<<totalCost<<endl;
    return 0;
}