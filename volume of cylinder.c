#include<stdio.h>
int main()
{
    float height,radius,volume,circumfrence,diameter;
    printf("Enter the height of cylinder:\n");
    scanf("%f",&height);
    printf("Enter the radius of the cylinder:\n");
    scanf("%f",&radius);
    diameter = (2*radius);
    circumfrence = (3.14*diameter);
    volume =(3.14*radius*radius*height);
    printf("The Diameter of the cylinder is :=%f\n",diameter);
    printf("The circumfrence of the cylinder is: =%f\n",circumfrence);
    printf("the volume of the cylinder is :=%f\n",volume);
}
