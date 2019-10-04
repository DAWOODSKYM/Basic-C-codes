#include<stdio.h>
int suma(int a,int b);
int suma(int a,int b)
{
    return(a+b);
}
int sum(int *a,int *b);

int sum(int *a,int *b)
{
    return(*a + *b);
}
int product(int *c,int *d);
int product(int *c,int *d)
{
    return (*c * *d);
}
int subtract(int *e,int *f);
int subtract(int *e,int *f)
{
    return (*e- *f);
}
double division(int *g,int *h);
double division(int *g,int *h)
{
    return (*g / *h);
}
int main()
{
    int first,second,add,prod,subt;
    double div;
    printf("Enter the values of first and second numbers:\n");
    scanf("%d %d",&first,&second);
    add = sum(&first,&second);
    prod = product(&first,&second);
    subt = subtract(&first,&second);
    div = division(&first,&second);

    printf("The Summation is:%d \n \n The product is:%d \n The difference is:%d \n \n their division gives:%f\n",add,prod,subt,div);
    return 0;
}
