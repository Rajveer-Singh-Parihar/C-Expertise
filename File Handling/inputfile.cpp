#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream file("xyz.txt");
    if(file.is_open()){
        string Line;
        while(getline(file,Line)){
            cout<<Line<<endl;
        }
        file.close();
    }
    else{
        cout<<"unable to  open file";
    }
}