#include<stdio.h>
/*C program to find the maximum of three numbers*/
int main()
{
    int a,b,c;
    printf("Enter three numbers a,b,c\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b && a>c)
        printf("The biggest number =%d\n",a);
    else if(b>a && b>c)
        printf("The maximum number =%d\n",b);
    else
        printf("The largest number is =%d\n",c);
    return 0;
}
