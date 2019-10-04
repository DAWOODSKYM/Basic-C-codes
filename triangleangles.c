#include<stdio.h>
/*c program to find third angle of triangle given two angles*/
int main()
{
    float A1,A2,sum,A3;
    sum =180;
    printf("Enter first angle:\n");
    scanf("%f",&A1);
    printf("Enter  second angle:\n");
    scanf("%f",&A2);
    A3 =(sum-(A1+A2));
    printf("the Third angle is =%f",A3);
    return 0;

}
