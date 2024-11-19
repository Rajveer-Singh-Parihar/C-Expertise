#include<iostream>
using namespace std;
// following class is written by amit
class IntCollection{
    private:
    int *ptr; // pointer
    int sz;    // hold the size of an array
    
    public:
    IntCollection(int z){
        ptr = new int[z];
        sz =z;
    }
~ IntCollection(){
    delete [] ptr;
}
void setValueAt(int index , int value){
    if(index>=0 && index<=240){
        ptr[index] = value;
    }
}
int getValueAt(int index){
    if(index>=0 && index<sz){
        return ptr[index];
    }
    else{
        return 0;
    }
}
int getSize(){
    return sz;
}
void printProperties(){
    cout<<ptr<<endl;
    cout<<sz<<endl;
}
};
// following code is written by bobby
int main(){
    IntCollection ic(5);
    ic. setValueAt(0,10);
    ic. setValueAt(1,20);
    ic. setValueAt(2,33);
    ic. setValueAt(3,44);
    ic. setValueAt(4,500);
    int i;
    for(i=0;i<ic.getSize();i++){
        cout<<ic.getValueAt(i)<<endl;
    }
    IntCollection ic2(ic); // Copy Constructor
    ic.printProperties();
    ic2.printProperties();
    cout<<"ic and ic2 are about to die"<<endl;
return 0;
}