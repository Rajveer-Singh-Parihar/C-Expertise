#include<iostream>
using namespace std;
class aaa{
    public:
    void sam(){

    }
};
class bbb : public aaa{
    public:
    void tom(){

    }
};
int main(){
    aaa *p1;
    p1 = new aaa;
    p1 -> sam();
    p1 -> tom(); // p1 dont now who is tom at the time of birth
    bbb *p2;
    p2 = new bbb;
    p2 ->sam();
    p2 -> tom();
    aaa *p3;
    p3 = new bbb;
    p3 -> sam();
    p3 -> tom(); // p3 dont now who is tom at the time of birth
    bbb *p4;
    p4 = new aaa; // invalid conversion
    return 0;
}
