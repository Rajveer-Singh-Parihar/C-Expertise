#include<stdio.h>
void kalia(int e, int f){
    printf("%d\n",e+f);
}
int something(int e){
    return e*e;
}
int main(){
    void (*p)(int,int);
    int (*k)(int);
    p=kalia;
    k=something;
    p(10,20);
    printf("%d \n",k(30));
    return 0;
}