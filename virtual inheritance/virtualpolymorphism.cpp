#include<iostream> // EXAMPLE OF VIRTUAL POLYMORPHISM
using namespace std;
class Car{   // common base class
    public:
   virtual void manual(){ // only one copy is passed

    }
};
class HondaCity: public Car { // same name with same signature in several classes.
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
    Car *c = NULL; // creating a pointer from common base class 
    int choice;
    cout<<"1 Honda city"<<endl;
    cout<<"2 MarutiAlto"<<endl;
    cout<<"Enter Your choice ";
    cin>>choice;
    if(choice == 1){
        c = new HondaCity;
        c->manual(); // through common base class pointer , call virtual method
    }
    else if(choice == 2){
        c= new MarutiAlto;
        c->manual();       
    }
    else{
        cout<<"Invalid Choice "<<endl;
    }
    if(c!=NULL){
        delete c;
    }
    return 0;
}  