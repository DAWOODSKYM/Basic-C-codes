#include<stdio.h>
#include<math.h>
float Magnitude(float X1,float X2,float Y1,float Y2);
float Magnitude(float X1,float X2,float Y1,float Y2)
{   float magnitude;
    magnitude=(sqrt(pow((X2-X1),2)+pow((Y2-Y1),2)));
    return magnitude;
}
float Bearing(float X1,float X2,float Y1,float Y2);
float Bearing(float X1,float X2,float Y1,float Y2)
{   double Gbearing;
    Gbearing = (atan((360-(atan(X1/Y1)))-(360-(atan(X2/Y2)))));
    return Gbearing;
}
int main()
{   float Size,X1,X2,Y1,Y2;
    double bearing;
    printf("Enter the value of X1:\n");
    scanf("%f",&X1);
    printf("Enter the value of Y1:\n");
    scanf("%f",&Y1);
    printf("Enter the value of X2:\n");
    scanf("%f",&X2);
    printf("Enter the value of Y2:\n");
    scanf("%f",&Y2);
    Size = Magnitude(X1,Y1,X2,Y2);
    bearing = Bearing(X1,Y1,X2,Y2);
    printf("The magnitude is =%f\n The Bearing is =%f",Size,bearing);
    return 0;
}
