#include <stdio.h>
int main()
{
    int length, width,perimeter;
    printf("Enter the length:\n");
    scanf("%d",&length);
    printf("Enter the width:\n");
    scanf("%d",&width);
    perimeter = 2*length + 2*width;
    printf("The perimeter = %d",perimeter);
    return 0;

}
