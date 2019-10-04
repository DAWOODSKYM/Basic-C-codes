#include <stdio.h>
#include <math.h>
int main()
{ float math,eng,kisw,cre,scie,sst,Total,Percentage,Average;
    printf("Enter the Eng marks:\n");
    scanf("%f",&eng);
     printf("Enter the math marks:\n","Enter the kisw marks:\n","Enter the cre marks:\n");
    scanf("%f",&math,"%f",&kisw,"%f",&cre);
     printf("Enter the scie marks:\n");
    scanf("%f",&scie);
     printf("Enter the sst marks:\n");
    scanf("%f",&sst);
    Total = (eng+math+kisw+cre+scie+sst);
    Average = (Total/6);
    Percentage = ((Average/600)*100);
    printf("The Total is:=%f \n",Total);
    printf("The Average is:=%f\n",Average);
    printf("The percentage is: =%f\n%",Percentage);
    return 0;



}
