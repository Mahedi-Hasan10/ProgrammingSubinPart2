#include<stdio.h>
int main()
{
    double pi = 3.14159;
    int* ptr;
    ptr = &pi;
    printf("The value of pi is %lf\n",pi);
    printf("The content of *ptr is %lf\n",*ptr);

    return 0;
}

/**
warning: assignment to ‘int *’ from incompatible pointer type ‘double *’ [-Wincompatible-pointer-types]
    6 |     ptr = &pi;
      |         ^
program2_3.c:8:38: warning: format ‘%lf’ expects argument of type ‘double’, but argument 2 has type ‘int’ [-Wformat=]
    8 |     printf("The content of *ptr is %lf\n",*ptr);
      |                                    ~~^    ~~~~
      |                                      |    |
      |                                      |    int
      |                                      double
      |                                    %d
*/
