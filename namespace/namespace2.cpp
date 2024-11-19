#include<stdio.h>
namespace abcd{
    int x;
    void doSomething()
    {
        printf("do something");
    }
    namespace pqrst{
        int x ;
        void doSomething()
        {
            printf(" here we are doing something");
        }
        void whatever()
        {
            printf(" whatever uou like print");
        }
    }
    int main()
    {
        abcd::doSomething(); // :: scope resolution operator
        abcd::x=100;
        printf(" the value %d \n",abcd::x);
        pqrst::doSomething();
        pqrst::x=200;
        printf("the value%d \n",pqrst::x);
        pqrst::whatever();
    }
}