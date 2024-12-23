#include<stdio.h>
void main()
{
int i,n,count=0;
printf("enter the values of n:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
    if(n%i==0)
{
count++;
}
}
if(count==2)
{
    printf("the given number is prime");
}
else
{
    printf("the given number is not prime");
}
}
