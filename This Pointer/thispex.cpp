#include<iostream>
using namespace std;
class Bulb{
    private:
    int wattage;
    public:
    void setWattage(int wattage){ // gives unknown wattage which wattage you are trying to accesss
        wattage = wattage;
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