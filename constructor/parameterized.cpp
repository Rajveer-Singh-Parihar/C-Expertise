#include<iostream>
using namespace std;
class bulb{
    private :
    int w;
    public:
    bulb(){
        w=0; // default constructor
    }
    bulb(int x){ // parameterized constructor
        if(x>=0 && x<=240){
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
    }
    int getWattage(){
        return w;
    }
};
int main()
{
    bulb g; // wattage is garbage
    bulb g1(60);
    cout<<"Wattage is :"<<g.getWattage()<<endl;
    cout<<"Wattage is :"<<g1.getWattage()<<endl;
    return 0;
}