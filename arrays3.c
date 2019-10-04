#include<stdio.h>
void main()
{
    int i,j,num[2][3];
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
        num[i][j]=i*3+j+1;
    for(i=0;i<2;i++)
    { for(j=0;j<3;j++)
        printf("%d",num[i][j]);
        printf("\n");

    }

}
