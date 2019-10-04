#include<stdio.h>
int main()
{
    int a,b;
    a=50;
    b=65;

    printf("the address of a is %p \n",&a);
    printf("The address of b is %p \n",&b);

     int *c = &a;
    int *d = &b;
    printf("The value of c is %p \n",c);
    printf("The value stored by pointer c is %p\n",&c);
    printf("The value stored by pointer d  is %d\n",d);
    printf("The value pointed to by pointer c is %d\n",*c);
    printf("The value pointed to by pointer d is %d\n",*d);
    return 0;
}
