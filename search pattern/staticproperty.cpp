//sTATIC PROPERTY -> oNE COPY OF STATIC PROPERTY IS SHARED BY ALL THE OBJECTS.
#include<iostream>
using namespace std;
class Bulb{
    private:
    int wattage;
    static int price ;
    public:
    void setWattage(int e){
        wattage = e;
    }
    int getWattage(){
        return wattage;
    }
    void setPrice(int e){
        price = e;
    }
    int getPrice(){
        return price;
    }
};
int main(){  // object does not have space for Static for property.
    Bulb b1,b2; // b1 and b2 have space for non-static property.
    b1.setWattage(60);
    b1.setPrice(100);
    cout<<"Wattage is :"<<b1.getWattage()<<endl;
    cout<<"Price is :"<<b1.getPrice()<<endl;
    b2.setWattage(240);
    b2.setPrice(150);
    cout<<"Wattage is :"<<b2.getWattage()<<endl;
    cout<<"Price is :"<<b2.getPrice()<<endl;
    cout<<"Wattage is :"<<b1.getWattage()<<endl;
    cout<<"Price is :"<<b1.getPrice()<<endl;
}