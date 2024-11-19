// STTIC METHOD -> IF a method of the class is declared as static, then it can be accessed without creating object of the class .(Provided it is public).
#include<iostream>
using namespace std;
class Bulb{
    private:
    int wattage;
    public:
    void setwattage(int e){
        wattage = e;
    }
    int getWattage(){
        return wattage;
    }
    static void printBrand(){
        cout<<"Philips"<<endl;
    }
};
int main()
{
    //Bulb::setwattage(60); // wrong non - static property required object.
    //cout<<Bulb::getWattage()<<endl;// wrong non static property required object.
    Bulb::printBrand(); // correct because static property does not neeed to create a object.
    Bulb b1;
    b1.setwattage(60);
    cout<<b1.getWattage()<<endl;
    b1.printBrand(); // static method we can create boject and we can access without creating object
    return 0;

}