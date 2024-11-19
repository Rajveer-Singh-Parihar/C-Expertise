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
    };
    Monitor mon;
};
using namespace standard_output_device;
int main(){
    int x=10;
    float y = 2.36f;
    char m = 'A';
    mon<<x<<y<<m;
    return 0;
}