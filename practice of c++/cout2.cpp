#include<stdio.h>
namespace standard_output_device
{
    class Monitor{
        public:
        Monitor & operator<<(int e){
            printf("%d",e);
            return *this;
        }
        Monitor & operator<<(float e){
            printf("%f",e);
            return *this;
        }
        Monitor & operator<<(char e){
            printf("%c",e);
            return *this;
        }
        Monitor & operator<<(void (*e)()){
            e();
            return *this;
        }
    };
    void newline(){
        printf("\n");
    }
    Monitor mon;
};
using namespace standard_output_device;
class Bulb{
    private:
    int wattage;
    public:
    void setWattage(int wattage){
        this ->wattage = wattage;
    }
    int getWattage(){
        return this-> wattage;
    }
};
Monitor & operator << (Monitor &m , Bulb &e){
m<<e.getWattage();
return m;
}
int main(){
    Bulb b;
    b.setWattage(60);
    mon<<"Wattage is"<<b<<newline;
    return 0;
}