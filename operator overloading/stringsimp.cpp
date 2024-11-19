#include<iostream>
#include<string.h>
using namespace std;
class TMString{
    private:
    char *ptr;
    public:
    TMString(){ // default Constructor
        ptr=NULL;
    }
    TMString(const char *ptr){ // parameterized Constructor
        this->ptr=NULL;
        if(ptr==NULL)return;
        int x = strlen(ptr);
        if(x==0)return ;
        this->ptr = new char[x+1]; // allocates memory
        if(this->ptr==NULL)return;
        strcpy(this->ptr,ptr);
    }
    TMString(const TMString &other){ // copy assignment
        this->ptr=NULL;
        if(other.ptr==NULL)return;
        int x = strlen(other.ptr);
        if(x==0)return ;
        this->ptr = new char[x+1]; // allocates memory
        if(this->ptr==NULL)return;
        strcpy(this->ptr,other.ptr);
    }
    TMString(TMString &&other){
        this->ptr = other.ptr;
        other.ptr = NULL;
    }
    const char * operator =(const char *ptr){ // 
    if(this->ptr!=NULL) delete[](this->ptr);
        this->ptr=NULL;
        if(ptr==NULL)return ptr;
        int x = strlen(ptr);
        if(x==0)return ptr;
        this->ptr = new char[x+1]; // allocates memory
        if(this->ptr==NULL)return ptr;
        strcpy(this->ptr,ptr);
        return ptr;
    }
    TMString & operator =(const TMString &other){ // copy assignment
    if(this->ptr!=NULL) delete[](this->ptr);
        this->ptr=NULL;
        if(ptr==NULL)return *this;
        int x = strlen(other.ptr);
        if(x==0)return *this ;
        this->ptr = new char[x+1]; // allocates memory
        if(this->ptr==NULL)return *this;
        strcpy(this->ptr,other.ptr);
        return *this;
    }
    TMString & operator = (TMString &&other){ // move assignment
        if(this->ptr!=NULL) delete[](this->ptr);
        this->ptr=other.ptr;
        other.ptr=NULL;
        return *this;
    }
    int operator <(TMString &rightoperand){
        if(this->ptr==NULL && rightoperand.ptr==NULL)return 0;
        if(this->ptr==NULL)return 1;
        if(rightoperand.ptr==NULL) return 0;
        int x= strcmp(this->ptr,rightoperand.ptr);
        return x<0;
    }
    int operator >(TMString &rightoperand){
        if(this->ptr==NULL && rightoperand.ptr==NULL)return 0;
        if(this->ptr==NULL)return 0;
        if(rightoperand.ptr==NULL) return 1;
        int x= strcmp(this->ptr,rightoperand.ptr);
        return x>0;
    }
    int operator <=(TMString &rightoperand){
        if(this->ptr==NULL && rightoperand.ptr==NULL)return 1;
        if(this->ptr==NULL)return 1;
        if(rightoperand.ptr==NULL) return 0;
        int x= strcmp(this->ptr,rightoperand.ptr);
        return x<=0;
    }
    int operator >=(TMString &rightoperand){
        if(this->ptr==NULL && rightoperand.ptr==NULL)return 1;
        if(this->ptr==NULL)return 0;
        if(rightoperand.ptr==NULL) return 1;
        int x= strcmp(this->ptr,rightoperand.ptr);
        return x>=0;
    }
    int operator ==(TMString &rightoperand){
        if(this->ptr==NULL && rightoperand.ptr==NULL)return 1;
        if(this->ptr==NULL)return 0;
        if(rightoperand.ptr==NULL) return 0;
        int x= strcmp(this->ptr,rightoperand.ptr);
        return x==0;
    }
    int operator !=(TMString &rightoperand){
        if(this->ptr==NULL && rightoperand.ptr==NULL)return 0;
        if(this->ptr==NULL)return 1;
        if(rightoperand.ptr==NULL) return 1;
        int x= strcmp(this->ptr,rightoperand.ptr);
        return x!=0;
    }
    friend ostream & operator<<(ostream &,TMString &);
};
ostream & operator<<(ostream &w , TMString &v){
    if(v.ptr!=NULL)w<<v.ptr;
    return w;
}
int main(){
    TMString s;
    cout<<"("<<s<<")"<<endl;
    TMString s1 = "God is Great";
    cout<<"("<<s1<<")"<<endl;
    s1="I live in Ujjain";
    cout<<"("<<s1<<")"<<endl;
    TMString s2=s1;
    cout<<"("<<s2<<")"<<endl;
    TMString s3 = move(s2);
    cout<<"("<<s3<<")"<<endl;
    cout<<"("<<s2<<")"<<endl;
    TMString s4;
    s4=move(s3);
    cout<<"("<<s4<<")"<<endl;
    cout<<"("<<s3<<")"<<endl;
    TMString j1="Amit";
    TMString j2="Bpbby";
    TMString j3 = "Amit";
    if(j1<j2)cout<<j1<<"is less THan"<<j2<<endl;
    if(j1>j2)cout<<j1<<"is greater THan"<<j2<<endl;
    if(j1==j3)cout<<j1<<"is equal to"<<j3<<endl;
    return 0;
}