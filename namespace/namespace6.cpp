#include<stdio.h>
namespace abcd{
    void doSomething()
    {
        printf("cool \n");
    }
}
namespace pqrst{
    void doSomething(){
        printf(" really cool \n");
    }
}
using namespace abcd;
using namespace pqrst;
int main()
{
    abcd::doSomething()  ;                  // doSomething();- not compile
    return 0; // will not compile as which to call
}