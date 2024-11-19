#include<stdio.h>
namespace ujjain
{
    namespace college{
        void printname()
        {
            printf(" whatever \n");
        }
    }
    namespace school{
            namespace secoundary
            {
                void printname()
                {
                    printf("MY NAME IS RAJVEER SINGH PARIHAR");
                }
            }
        }
    int main(){
        ujjain::college::printname();
        ujjain::school::secoundary::printname();
        return 0;
    }
}