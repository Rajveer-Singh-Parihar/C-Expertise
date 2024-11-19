#include<iostream>
using namespace std;
class bulb{
    private :
    int w;
    public:
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
    cout<<"Wattage is :"<<g.getWattage()<<endl;
    return 0;
}