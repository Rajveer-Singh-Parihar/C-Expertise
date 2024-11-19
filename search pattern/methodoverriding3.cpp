#include<iostream>
using namespace std;
class Movie{
    public:
    void start(){
        cout<<"Welcome"<<endl;
    }
    void interval(){
        cout<<"have a coffe for rs 50"<<endl;
    }
    void end(){
        cout<<" Thank You Come Again !"<<endl;
    }
};
class JungleBook : public Movie
{
    public:
    void reelOne(){
        cout<<"Mowgli Enters The Jungle"<<endl;
    }
    void reelTwo(){
        cout<<"Bagheera Saves The Mowgli"<<endl;
    }
    void interval(){
        Movie::interval(); // here we calling the movie class interval
        cout<<" have a pepsi for rs 75"<<endl;
    }
};
int main(){
    JungleBook j;
    j.start();
    j.reelOne();
    j.interval();
    j.reelTwo();
    j.end();
    return 0;
}