#include<iostream>
#include<conio.h>
using namespace std;
class example{
    int x ;
    int y;
    public:
   void setdata(int p ,int q){
        x=p;
        y=q;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }
};
int main(){
    example e1;
    e1.setdata(8,9);
    e1.display();
    example e2;
    e2.setdata(4,5);
    e2.display();
}
