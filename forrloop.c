#include<stdio.h>
/*C program to compute for the sum of numbers between 1 and user supplied value*/
int main()
{ int a,i,sum;

    sum =0;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {if (i%2==0)
        {
        sum=sum+i;
        }
    }
    printf("THe sum of even numbers =%d\n",sum);
    return 0;

}
