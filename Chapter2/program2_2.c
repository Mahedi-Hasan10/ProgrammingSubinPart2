#include<stdio.h>
int main()
{
    int x = 10;
    int* p;
    p = &x;
    printf("*p = %d\n",*p);
    printf("value of p  is = %p\n",p);

    return 0;
}

//Note : 
// when we write int* p thats mean its "Integer pointer p"
//when we write *p then we read is as  "Content of p"