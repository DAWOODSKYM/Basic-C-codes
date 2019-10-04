#include<stdio.h>
int main()
{
      int N,i;
    char ch;
    printf("Enter new number N:\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d\n",i);
    }
     while(i = N)
    {
        printf("Do you want to rerun program(Y or N?\n");
        scanf(" %c",&ch);

        if(ch == 'y'|| ch =='Y')
        {
           printf("Enter new number N:\n");
            scanf("%d",&N);
            for(i=1;i<N;i++)
            {
                printf("%d\n",i);
            }
            }
            else if(ch == 'N'|| ch == 'n')
                    {
                    break;
                    }
    }printf("This is the end\n");
    return 0;
}
