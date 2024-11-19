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
        this->ptr = new char[x+1]; // allocates memory
        strcpy(this->ptr,ptr);
    }
    ~TMString(){ //DESTRUCTOR
if(this->ptr!=NULL) delete[](this->ptr);
    }
friend ostream & operator <<(ostream&, TMString &);
};
ostream & operator<<(ostream &w,TMString &s){
    if(s.ptr!=NULL) w<<s.ptr;
}
int main(){
    TMString a = "God IS great";
    cout<<a<<endl;
    return 0;
}