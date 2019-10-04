#include <stdio.h>

int main()
{
    int days,weeks,months,years,remaining;

    printf("enter the number of days:\n");
    scanf("%d",&days);
    weeks = (days/7);
    years = (days/365);
    remaining =(days%365);
    months =(days/30);
    printf("The number  of weeks are :=%d\n",weeks );
    printf("The number  of years are :=%d,=%d\n days",years,remaining );
    printf("The number  of months are :=%d\n",months );
    printf("The number  of days are :=%d",days );
    return 0;

}
