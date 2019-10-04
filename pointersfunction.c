#include<stdio.h>
/*function declarations*/
int sum(int a,int b);
int sum_direct(int *c,int *d);
int sum(int a,int b)
{
    return (a + b);
}
int sum_direct(int *c,int *d)
{
    return(*c + *d);
}
int main()
{
    int first,second,direct,indirect;
    printf("Enter the values of first and second numbers:\n");
    scanf("%d %d",&first,&second);
    direct = sum(first,second);
    indirect =sum_direct(&first,&second);
    printf("Direct Summation:%d \n \n Indirect summation:%d",direct,indirect);
    return 0;
}
