#include<stdio.h>

int main ()
{int marks[3][3][3];
int marks2[3][3][3];
int marks3[3][3][3];
int result[3][3][3];

int i,j,k;
/*first matrix*/
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {for(k=0;k<3;k++)
            {
                printf("Enter The matrix values:\n");
                scanf("%d",&marks[i][j][k]);
            }}}
 /*second matrix*/
 for(i=0;i<3;i++)
 {for(j=0;j<3;j++)
            {{for(k=0;k<3;k++){
                printf("Enter The 2nd matrix values:\n");
                scanf("%d",&marks2[i][j][k]);
            }}}
//third matrix
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {for(k=0;k<3;k++){
        printf("Enter The 3nd matrix values:\n");
        scanf("%d",&marks3[i][j][k]);
            }}}
/*product of matrix*/
//for(i=0;i<3;i++)
   // for(j=0;j<3;j++)
                printf("The product for the entered values is:\n");

                for(i=0;i<2;i++)
                {printf("\n");
                    for(j=0;j<2;j++)
                    {printf("\n");
                        {for(k=0;k<3;k++){
                        {   result[i][j][k] =marks[i][j][k]*marks2[i][j][k]*marks3[i][j][k];

                            printf("%d\t",result[i][j][k]);

                        }}}
                        }
    printf("\n");
    return 0;
}}}

