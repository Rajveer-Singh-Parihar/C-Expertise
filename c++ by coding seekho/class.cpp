// class is blue print for an object.
// if there will be class is cxreated than its object is definately created

/*
class nokia{ -- objects are created differently
int mic; - INSTANCES VARIABLES
int speaker;
int radio;
}
void seTRadio() 
{
- instance function
}
void SetMic()
{
- instance function
}
int main()
*/

#include<iostream>
#include<conio.h>
using namespace std;
class car
{
    public: // class member is by default private but we can create it public
    int tyre;
    int steering;
    int brake;

    void setTyre()
    {
        cout<<tyre;
   cout<<"TYRE FIT SUCCESSFULLY";
    }

    void setBrake(){
    cout<<"Break Applied Successufully";
    }
};
int main()
{
car c1; // c1 is the object of car class
c1.tyre = 55;
c1.setBrake();
c1.setTyre();
}