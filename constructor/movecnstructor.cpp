#include<iostream>
using namespace std;
class IntCollection{
    private:
    int *ptr;
    int sz;
    public:
    IntCollection(int x){
        ptr = NULL;
        sz=0;
        if(x<=0) return;
        ptr = new int[x];
        if(ptr==NULL){
            sz=0;
        }
        else{
            sz=x;
        }
        IntCollection( const IntCollection &other){
            ptr=NULL;
            sz=0;
            if(other.ptr==NULL) return;
            ptr=new int[other.sz];
            if(ptr==NULL) return;
            sz=other.sz;
            int i;
            for(i=0;i<other.sz;++i) ptr[i] = other.ptr[i]
        }
        IntCollection(IntCollection &&other){
            ptr=other.ptr;
            sz=other.sz;
            other.ptr=NULL;
            other.sz=0;
        }
        ~IntCollection(){
            if(ptr!=NULL) delete [] ptr;
        }
        int getSize(){
            return sz;
        }
        int getValueAt(int index){
            if(index<0 || index>=sz) return 0;
            return ptr[index];
        }
        void setValueAt(int index,int value){
            if(index<0 || index>=sz) return;
            ptr[index] = value;
        }
    }
};
int main(){
    IntCollection ic1(5);
    ic1.setValueAt(0,10);
    ic1.setValueAt(1,12);
    ic1.setValueAt(2,44);
    ic1.setValueAt(3,55);
    ic1.setValueAt(04,1000);
    int u;
    cout<<"Size is :"<<ic1.getSize()<<endl;
    for(u=0;u<ic1.getSize();++u) cout<<ic1.getValueAt(u)<<endl;
    cout<<endl;
    IntCollection ic2(ic1);
    cout<<"Size is"<<ic2.getSize()<<endl;
    for(u=0;u<ic2.getSize();++u) cout<<ic2.getValueAt(u)<<endl;
    cout<<endl;
    IntCollection ic3(move(ic1));
    cout<<"Size is"<<ic3.getSize()<<endl;
    for(u=0;u<ic3.getSize();++u) cout<<ic3.getValueAt(u)<<endl;
    cout<<endl;
    cout<<"Size is :"<<ic1.getSize()<<endl;
    return 0;
}
