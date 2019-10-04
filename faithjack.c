#include <stdio.h>
#include <math.h>
 int main()
 {
     int X1,Y1,X2,Y2;
     float magnitude,direction;
     printf("Enter the value of X1,X2,Y1,Y2\n");
     scanf("%d,%d,%d,%d,\n",&X1,&X2,&Y1,&Y2);
     magnitude = (sqrt(pow((X2-X1),2)+pow((Y2-Y1),2)));
     direction = (atan((Y2-Y1)/(X2-X1)));
     printf("The magnitude is:%f\n",magnitude);
     printf("The direction is :%f\n",direction);
     return 0;

 }
