#include<stdio.h>
#include<math.h>
/*Arithmetic operations using pointers function*/
int suma(int a,int b);
int suma(int a,int b)
{
    return(a+b);
}
int sum(int *a,int *b);

int sum(int *a,int *b)
{
    return(*a + *b);
}
int product(int *c,int *d);
int product(int *c,int *d)
{
    return (*c * *d);
}
int subtract(int *e,int *f);
int subtract(int *e,int *f)
{
    return (*e- *f);
}
double division(int *g,int *h);
double division(int *g,int *h)
{
    return (*g / *h);
}
/*3D arrays print using pointers function*/
int element(int el [2][3][2]);
int element(int el [2][3][2])
{
    printf("The 3d array is: \n");
    for(int i=0;i<2;++i){
        for(int j=0;j<3;++j){
            for(int k=0;k<2;++k){
                printf("[%d] [%d] [%d]=%d\n",i+1,j+1,k+1,el[i][j][k]);
            }
        }
    }
}
/*Solving for quadratic roots function*/
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
    break;
    case 0:
    switch(discriminant<0)
    {
    case 1:
        root1=root2=-b/(2*a);
        imaginary=sqrt(-discriminant)/(2*a);
        printf("Two distinct complex roots exist: %.2f +i%.2f and %.2f-i%.2f\n",root1,imaginary,root2,imaginary);
        break;
    case 0:
        root1=root2=-b/(2*a);
        printf("Two equal and real roots exist:%.2f and %.2f\n",root1,root2);
        break;
    }
    }
        return discriminant,root1,root2;
}
/*Function to get bearing and magnitude of a vector*/
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
/*Start of the Main function*/
int main()
/*Arithmetic operations using pointers*/
{
    int first,second,add,prod,subt;
    double div;
    printf("Enter the values of first and second numbers:\n");
    scanf("%d %d",&first,&second);
    add = sum(&first,&second);
    prod = product(&first,&second);
    subt = subtract(&first,&second);
    div = division(&first,&second);

    printf("The Summation is:%d \n \n The product is:%d \n The difference is:%d \n \n their division gives:%f\n",add,prod,subt,div);
/*3D arrays using pointers*/
    int i,j,k, el[2][3][2];
    printf("Enter the values \n");
    for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
            for(k=0;k<2;k++){
    printf("%d ,%d,%d",i+1,j+1,k+1);
    scanf("%d",&el[i][j][k]);

    }}
    }
    element(i);

    /*Solving for roots of quadratic equations*/
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
    printf("\n");

    /*Solving for the Magnitude and Bearing of a vector*/
    float Size,X1,X2,Y1,Y2;
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
