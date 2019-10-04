#include<stdio.h>
int main()
{
    float height,base,Area;
    printf("enter height of triangle:\n");
    scanf("%f",&height);
    printf("Enter base of the triangle:\n");
    scanf("%f",&base);
    Area = (0.5*base*height);
    printf("the area of the triangle is =%f:\n",Area);
    return 0;
}
