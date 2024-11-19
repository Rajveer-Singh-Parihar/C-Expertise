// if class is inheriting an abstract class , then within derived class , you will have to override all the inherited pure virtual function . otherwise derived class treated as an abstrasct class.
// IN following example , HondaCity Programmer is not providing the implementation of manual , Hence hondacity is an abstarct class and cannot instantciated

// ABSTRACT CLASS -> A class which contain pure virtual function so it is called an abstract class.
#include<iostream>
using namespace std;
class Car{
    public:
    virtual void manual()=0; // pure virtual function
};
class Hondacity: public Car{
    public:
    void documentation(){ //hondacity is an abstract class
        cout<<"Some Operational Details about HondaCity"<<endl;
    }
};
class MarutiAlto: public Car{
    public:
    void manual(){
        cout<<"Some operational details about maruti alto"<<endl;
    }
};
int main(){
    Car *c = NULL;
    int choice;
    cout<<"1 HOndaCity"<<endl;
    cout<<"2 Maruti Alto"<<endl;
    cout<<"Enter your choice :";
    cin>>choice;
    if(choice ==1){
        c=new Hondacity; // cant be instantciated because hondacity is abstract class programmer doesnt provide the implementation of manual 
        c->manual(); 
    }
    else if(choice == 2){
        c = new MarutiAlto; // creating a object 
        c -> manual();
    }
    else{
        cout<<"Invalid choice"<<endl;
    }
    if(c != NULL){
        delete c;
    }
    return 0;
}