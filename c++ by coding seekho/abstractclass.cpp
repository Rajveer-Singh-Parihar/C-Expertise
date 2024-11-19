 #include<iostream>
 #include<conio.h>
 using namespace std;
 class bank{
    int g;
    public:
    int roi;
    virtual void rofi() =0;  // abstract class - object cant be access 
    void f1()
    {
        cout<<"parent f1 executed";
    }
 };
class SA : public bank{
    public:
 void rofi(){
 cout<<" rofi applied";
}

};
 int main() // ABSTRACT CLASS - A CLASS WHICH OBJECT IS NOT CREATED .
 {
SA s1;
s1.rofi();
 }