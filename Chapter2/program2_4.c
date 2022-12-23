#include<stdio.h>
int main()
{
    int x =10;
    int* p;
    p =&x;
    printf("The value of x is %d\n",x);
    *p = 30;
    printf("The value of x is : %d\n",x);
    printf("The address of x is %p\n",&x);
    printf("The value of p is %p\n",p);

    return 0;
}