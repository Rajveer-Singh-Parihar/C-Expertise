#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("xyz.txt");
    if(file.is_open()){
        file<<"perform files Handling"<<endl;
        file.close();
    }
    else{
        cout<<"Unable to open file ";
    }
    return 0;
}