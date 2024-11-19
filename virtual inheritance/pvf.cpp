#include<iostream> // we dont want to provide the defination manual for that we will end the declaration with = 0
using namespace std; // Just considering a syntactical rule to create a pure virtual function
class Car{
    public:
virtual void manual ()=0; // Such a function is called pure virtual function 
};
// if a class contain pure virtual function so it is an abstract class .
// we cannot create an object / instance of an abstarct class
// Abstarct class may have other function which may not be virtual or pure virtual.
// you can declare a pointer from an abstarct class .
int main(){
    Car g; // car is an abstrcat class so it cant be instantiated - incorrect
    Car *u;
    u = new car; // car cannot be instantitated because it is an abstract class - incorrect
    
    return 0;
}