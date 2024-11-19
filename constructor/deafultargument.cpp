#include<iostream>
using namespace std;
class Bulb{
    private:
    int w;
    public:
    Bulb(int x=56){
        if(x>=0 && x<=240)
        {
            w=x;
        }
        else{
            w=0;
        }
    }
    void setWattage(int x){
        if(x>=0 && x<=240){
            w=x;
        }
        else{
            w=0;
        }
    };
    int getWattage(){
        return w;
    }
};
int main(){
    Bulb b1;
    Bulb b2(45);
    cout<<"Wattage is :"<<b1.getWattage()<<endl;
    cout<<"Wattage is :"<<b2.getWattage()<<endl;
}
