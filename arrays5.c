#include<stdio.h>

int main ()
{int marks[3][4][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("Enter The matrix values");
                scanf("%d\t%d\t%d\t",marks[i][j][k]);
                for(i=0;i<3;i++)
                {
                    for(j=0;j<4;j++)
                    {
                        for(k=0;k<3;k++)
                        {
                            printf("%d\t %d\t%d\t",marks[i][j][k]);
                            printf("\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
