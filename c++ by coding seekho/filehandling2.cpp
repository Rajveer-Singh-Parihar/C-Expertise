#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char a ;
    fin.open("demo.txt");
    a=fin.get(); // takes the first char from demo.txt file
    a=fin.get(); // secound char
    a=fin.get(); // third char
    cout<<a;  // return l
    fin.close();
}