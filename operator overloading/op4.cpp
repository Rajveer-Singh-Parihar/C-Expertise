#include<iostream>
using namespace std;
class Bulb{
private:
int wattage;
public:
Bulb(){
    this->wattage=0;
}
void setWattage(int wattage){
    this->wattage = wattage;
}
int operator *(){ // overload star meyhod
    return this->wattage;
}
operator int(){ // convert bulb object to integer
    return this->wattage;
}
};
int main(){
    Bulb b;
    b.setWattage(200);
    int x;
    x=*b;
    cout<<x<<endl;
    int j;
    j=50+b;
    cout<<j<<endl;
    return 0;
}