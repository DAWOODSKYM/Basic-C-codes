#include<stdio.h>
int main()
{
    int j;
    for(int j=0;j<6;j++)
        {
            if(j==4)
                {continue;
                }
            printf("%d\n",j);
        }return 0;
}
