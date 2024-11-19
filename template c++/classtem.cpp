#include<iostream>
using namespace std;
class Collection{
    int *ptr; // by default member are private
    size_t sz;
    public:
    Collection(int sz){
        this->sz = sz;
        this->ptr = new int [this->sz];
    }
    void setData(int index, int data){
        if(index<0 || index>=this->sz) return ;
        this->ptr[index]=data;
    }
    int getData(int index){
        if(index<0 || index>=this->sz) return 0;
        return this->ptr[index];
    }
    int getSize(){
        return this->sz;
    }
    ~Collection(){
        delete[](this->ptr);
    }
};
int main(){
    Collection c(5);
    c.setData(0,10);
     c.setData(1,20);
      c.setData(2,30);
       c.setData(3,40);
        c.setData(4,50);
        for(int i=0;i<c.getSize();i++){
            cout<<c.getData(i)<<endl;
        }
        return 0;
}