#include<stdio.h>
int main()
{
    int ara[5] = {50,60,70,80,90};
    for(int i = 0;i<5;i++)
        printf("the address of ara[%d] is %d\n",i,&ara[i]);

    return 0;
}