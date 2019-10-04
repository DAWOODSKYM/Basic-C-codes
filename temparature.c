#include <stdio.h>
int main()
{
    int celcius, farenheight;
    printf("Enter the temperature in celcius;\n");
    scanf("%d",&celcius);
    farenheight = ((celcius*9/5)+32);
    printf("Temperature in farenheights is = %d",farenheight);
    return 0;
}
