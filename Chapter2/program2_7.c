#include<stdio.h>
int main()
{
   int x =10, y;
   int *p;
   int *q;
   p = &x;
   y = *p;
   *p = 15;
   *q  = 20;

   printf("value of x: %d\n",x);
   printf("value of y: %d\n",y);
   printf("Value od *p : %d\n", *p);
   printf("Value od *q : %d\n", *q);
   return 0;
}