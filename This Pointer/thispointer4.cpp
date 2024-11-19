#include<iostream>
using namespace std;
class HondaCity{
    // some 1000 properties
    public:
    void manual(){
        cout<<"Some Operational Details About HondaCity"<<endl;
    }
};
class MarutiAlto{
    // some 800 properties 
    public:
    void manual(){
        cout<<"Some operational details about marutiAlto"<<endl;
    }
};
int main(){
    HondaCity hc;
    MarutiAlto  ma;
    int choice;
    cout<<"1 Honda city"<<endl;
    cout<<"2 MarutiAlto"<<endl;
    cout<<"Enter Ypur choice ";
    cin>>choice;
    if(choice == 1){
        hc.manual();
    }
    else if(choice == 2){
        ma.manual();
    }
    else{
        cout<<"Invalid Choice "<<endl;
    }
    return 0;
}