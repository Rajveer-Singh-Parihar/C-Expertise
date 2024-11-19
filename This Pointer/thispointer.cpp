#include<iostream>
using namespace std;
class Bulb{
    private:
    int wattage;
    public:
    void setWattage(int wattage){ // talking about the wattage that we have set in that method
       this -> wattage = wattage;
    }
    int getWattage(){
        return wattage;
    }
};
int main(){
    Bulb b1;
    b1.setWattage(60);
    cout<<b1.getWattage()<<endl;
    return 0;
}