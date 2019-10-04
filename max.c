#include<stdio.h>
/*c program to find max between to numbers*/
int main()
{
    int x,y;
  printf("ENTER TWO NUMBERS X AND Y:\n");
  scanf("%d,%d",&x,&y);
  if(x>y)
  {
      printf("The maximum number is x =%d",x);
  }else
  {
      printf("The maximum number is y =%d",y);
  }
  return 0;
}
