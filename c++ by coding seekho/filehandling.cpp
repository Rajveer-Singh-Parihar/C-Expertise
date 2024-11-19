#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
ofstream fout;
fout.open("demo.txt"); // new file is created in demo.txt.
fout<<" hello friends "; // always new text is created in file 
fout.close();
}