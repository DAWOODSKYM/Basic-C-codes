#include<stdio.h>
#include<string.h>

char append(char *str1,char *str2);
char append(char *str1,char *str2)
{char conc;
 char s1[]="str1";
 char s2[]="str2";
 conc = strcat(str1, str2);
 *str1 = &conc;
 return conc;

}
void main()
{
    char word,str1,str2;
    printf("Enter the first word \n");
    scanf("%c",&str1);
    printf("Enter the second word \n");
    scanf("%c",&str2);
    word = append(str1,str2);
    printf("Your two words are \n%s",word);

}
