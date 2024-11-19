#include<iostream>
using namespace std;
template<class T>
class Collection{
    T *ptr; // by default member are private
    size_t sz;
    public:
    Collection(int sz){
        this->sz = sz;
        this->ptr = new T [this->sz];
    }
    void setData(int index, T data){
        if(index<0 || index>=this->sz) return ;
        this->ptr[index]=data;
    }
    T getData(int index){
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
    Collection<int>c(5);
    c.setData(0,10);
     c.setData(1,20);
      c.setData(2,30);
       c.setData(3,40);
        c.setData(4,50);
        for(int i=0;i<c.getSize();i++){
            cout<<c.getData(i)<<endl;
        }
        Collection<char> g(3);
        g.setData(0,'A');
        g.setData(1,'B');
        g.setData(3,'C');
        for( int k=0;k<g.getSize();++k){
            cout<<g.getData(k)<<endl;
        }
        return 0;
}