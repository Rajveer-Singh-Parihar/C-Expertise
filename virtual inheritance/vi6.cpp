#include<iostream>
using namespace std;
class aaa{ // class aaa is being written by amit
    public:
    
    aaa(int e){
        cout<<"Base class (aaa) Parameterized Costructor"<<endl;
    }
}; // compiler will introduce copy and move constructor
class bbb: public aaa{ // compiler will introduce empty copy and move constructor.
public: // from empty constructor will invoke zero parameter construcotr so the code will not compile
};  // from copy constructor , compier will invoke copy constructor.
int main(){ // from move constructor , move construcotr of base class 
    return 0;
}