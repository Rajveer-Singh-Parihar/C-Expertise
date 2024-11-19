#include<stdio.h>
namespace abcd
{
    void doSomething()
    {
        printf(" cool \n");
    }
}
using namespace abcd;
int main()
{
    doSomething();
    return 0;
}