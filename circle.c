#include <stdio.h>

/*This is a program to get area of a circle*/
int main()

{
    float radius,diameter,Area,circumfrence;
    printf("enter the radius:\n");
    scanf("%f",&radius);
    diameter = (radius*2);
    circumfrence = (2*3.14*radius);
    Area = (pi*radius*radius);
    printf("The Area is =%f:\n",Area);
    printf("The circumfrence is =%f:\n",circumfrence);
    printf("the diameter is =%f:\n",diameter);
    return 0;

}
