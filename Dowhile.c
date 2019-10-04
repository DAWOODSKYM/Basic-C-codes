#include<stdio.h>
int main()
{ int x;
    x=0;
    do{
        printf("%d\n",x);
        x = ++x;
    }while(x<=9);
    return 0;
}
