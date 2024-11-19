#include<iostream> // using 1 pointer
using namespace std;
class Car{
};
class HondaCity: public Car {
    // some 1000 properties
    public:
    void manual(){
        cout<<"Some Operational Details About HondaCity"<<endl;
    }
};
class MarutiAlto : public Car{
    // some 800 properties 
    public:
    void manual(){
        cout<<"Some operational details about marutiAlto"<<endl;
    }
}; // 323 more class representing various models of car category products
int main(){
    Car *c = NULL;
    int choice;
    cout<<"1 Honda city"<<endl;
    cout<<"2 MarutiAlto"<<endl;
    cout<<"Enter Your choice ";
    cin>>choice;
    if(choice == 1){
        hc = new HondaCity;
        hc->manual();
    }
    else if(choice == 2){
        ma = new MarutiAlto;
        ma->manual();       
    }
    else{
        cout<<"Invalid Choice "<<endl;
    }
    if(c!=NULL){
        delete c;
    }
    return 0;
}