#include<iostream>
#include<fstream>
using namespace std;

void addFriend(){
    string FirstName;
    string LastName;
    string ContactNumber;
    cout<<"Enter First Name";
    cin>>FirstName;
    cout<<"Enter Last Name";
    cin>>LastName;
    cout<<"Enter ContactNumber";
    cin>>ContactNumber;
    ofstream f("Friends.data", ios::app);
    if(f.fail()){
        cout<<"Unable To Add Friend "<<endl; // instead of constructor  we can call open with same argument
        return ;
    }
    f<<FirstName;
    f<<"\n";
    f<<LastName<<"\n";
    f<<ContactNumber<<"\n";
    f.close();
}
void displayListOfFriends(){
    ifstream f;
    f.open("Friends.data"); // instead of open we could use conmstructor
    if(f.fail()){
        cout<<"No Friends"<<endl;
        return ;
    }
    string fn,ln,cn;
    while(true){
        f>>fn;
        if(f.fail())break;
        f>>ln;
        f>>cn;
        cout<<fn<<","<<ln<<','<<cn<<endl;
    }
    f.close();
}
int main(){
    int choice;
    while(true){
        cout<<"1 Add Friend"<<endl;
        cout<<"2 Display List of Friends"<<endl;
        cout<<" 3. Exit"<<endl;
        cout<<"Enter Your Choice ";
        cin>>choice;
        if(choice==1){
            addFriend();
        }
        else if(choice ==2){
            displayListOfFriends();
        }
        else{
            cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}