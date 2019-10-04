#include<stdio.h>
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

int main()
{ int i,j,k, el[2][3][2];
printf("Enter the values \n");
   for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
            for(k=0;k<2;k++){
    printf("%d ,%d,%d",i+1,j+1,k+1);
   scanf("%d",&el[i][j][k]);
 element(i);
    }}
    }

    return 0;
}
