#include<stdio.h>
int main()
{
    int N,i,p;
    char ch;
    printf("Enter new number N:\n");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("%d\n",i);
    }
    while(i=N)
    {
        printf("Do you want to rerun program(Y or N?\n");
        scanf(" %c",&ch);

        while(ch ==' Y' || ch == 'y')
        {
             printf("Enter new number N:\n");
             scanf("%d",&N);
              for(i=0;i<N;i++)
                {
                    printf("%d\n",i);
                }

        }while(ch == 'N'|| ch =='n' || p <= 1)
                {
                    printf("This is the end\n");
                    p=p+1;
                }
    }
    return 0;
}
