#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream
    file("xyz.txt",ios::app); // append 
    if(file.is_open()){
        file<<"Append to new file at the end"<<endl;
        file .close();
    }
    else{
        cout<<"Unbable to open the file";
    }
    return 0;
}
