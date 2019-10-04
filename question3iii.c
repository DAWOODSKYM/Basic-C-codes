/*A program to find the roots of quadratic equations*/
#include<stdio.h>
#include<math.h>
float quadratic(float a,float b,float c);
float quadratic(float a,float b,float c)
{float root1,root2,imaginary,discriminant;
 discriminant=(b*b)-(4*a*c);
switch(discriminant>0)
{
case 1:
    root1=(-b+ sqrt(discriminant))/(2*a);
    root2=(-b- sqrt(discriminant))/(2*a);
    printf("Two distinct and real roots exists: %.2f and %.2f\n",root1,root2);
    //break;
    case 0:
    switch(discriminant<0)
    {
    case 1:
        root1=root2=-b/(2*a);
        imaginary=sqrt(-discriminant)/(2*a);
        printf("Two distinct complex roots exist: %.2f +i%.2f and %.2f-i%.2f\n",root1,imaginary,root2,imaginary);
        //break;
    case 0:
        root1=root2=-b/(2*a);
        printf("Two equal and real roots exist:%.2f and %.2f\n",root1,root2);
        break;
    }
    }
        return discriminant,root1,root2;
}
int main()
{
float a,b,c,Roots;

printf("Enter values of a,b,c of quadratic equation:\n");
printf("The value of a is:\n");
scanf("%f",&a);
printf("The value of b is:\n");
scanf("%f",&b);
printf("The value of c is:\n");
scanf("%f",&c);
Roots = quadratic(a,b,c);
printf("%f",Roots);

return 0;
}
