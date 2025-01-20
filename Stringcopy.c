#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[200];
printf("enter the strings str1 and str2:");
scanf("%s%s",str1,str2);
strcpy(str1,str2);
printf("%s",str2);
}
