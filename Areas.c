#include<stdio.h>
int rectangle(int length,int width);
float circle(int radius);
float triangle(int base,int height);

int rectangle(int length,int width)
{
    float area1;
    area1=(width*length);
    return area1;
}

float circle(int radius)
{
    float area2;
    area2 = (3.14*radius*radius);
    return area2;
}

float triangle(int base,int height)
{
    float area3;
    area3 = (0.5*base*height);
    return area3;
}
int main()
{
    int Rectangle;
    float Circle,Triangle;

    Rectangle = rectangle(10,8);
    Circle = circle(5);
    Triangle= triangle(5,2);

    printf("Area of Rectangle:%d\n Area of circle:%f\n Area of triangle:%f \n",Rectangle,Circle,triangle);
    return 0;
}

