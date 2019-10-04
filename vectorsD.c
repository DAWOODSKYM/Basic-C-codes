#include<stdio.h>
#include<math.h>
int main()
{
    float X1,Y1,X2,Y2,Direction,Magnitude;
    printf("Enter the value of X1:\n");
    scanf("%f",&X1);
    printf("Enter the value of Y1:\n");
    scanf("%f",&Y1);
    printf("Enter the value of X2:\n");
    scanf("%f",&X2);
    printf("Enter the value of Y2:\n");
    scanf("%f",&Y2);
    Direction = (atan((Y2-Y1)/(X2-X1)));
    Magnitude = (sqrt(pow((X2-X1),2)+pow((Y2-Y1),2)));
    printf("The direction is:%f\n",Direction);
    printf("The magnitude is =%f\n",Magnitude);
    return 0;

}
