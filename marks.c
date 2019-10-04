#include<stdio.h>
#include <stdlib.h>
/*C program to enter marks of five subjects and find percentage and grading*/

int Phyc,Math,Chem,Bio,Comp;
float perc;

main()
{
    printf("Enter Marks\n");
    printf("Enter Physics Marks;");
    scanf("%d",&Phyc);
    printf("Enter Mathematics Marks;");
    scanf("%d",&Math);
    printf("Enter Chemistry Marks;");
    scanf("%d",&Chem);
    printf("Enter Biology Marks;");
    scanf("%d",&Bio);
    printf("Enter Computer Marks;");
    scanf("%d",&Comp);

    perc =(Phyc+Math+Chem+Bio+Comp)/5.0;
    if(perc>= 90)
    {
        printf("Grade A");
    }else if(perc>= 80)
    {
        printf("Grade B");
    }else if(perc >=70)
    {
        printf("Grade C");
    }else if(perc >=60)
    {
        printf("Grade D");
    }else if(perc>=40)
    {
        printf("Grade E");
    }else
    {
        printf("grade F");
    }
    return 0;
}
