#include<iostream> // the following code is being writeen by amit
using namespace std;
class Movie{
    public:
    void start(){
        cout<<"welcome"<<endl;
    }
    void interval(){
        cout<<"Interval Have Coffee for Rs 50"<<endl; //this method doesnt call because of search pattern it goes in the junglebook class and call interval
    }
    void end(){
        cout<<"thank you come again"<<endl;
    }
};
class JungleBook : public Movie{ // follwoing code is being written by booby
    public:
    void reelone(){
        cout<<"mowgli enters the jungle"<<endl;
    }
    void reeltwo(){
        cout<<"Bagheera Saves The Jungle"<<endl;
    }
    void interval(){ // here bobby is ovrriding the interval of movie class this is possible due to Search pattern
        cout<<"Interval have pepsi for Rs 75"<<endl;
    }
};
int main()
{
    JungleBook j;
    j.start();
    j.reelone();
    j.interval();
    j.reeltwo();
    j.end();
    return 0;
}
