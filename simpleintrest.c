#include<stdio.h>
int main()
{
    int principal;
    float time, rate,simpleI;
    printf("Enter the principal:\n");
    scanf("%d",&principal);
    printf("Enter the rate:\n");
    scanf("%f",&rate);
    printf("Enter the time:\n");
    scanf("%f",&time);
    simpleI = ((principal*rate*time)/100);
    printf("The simple intrest is =%f",simpleI);
    return 0;

}
