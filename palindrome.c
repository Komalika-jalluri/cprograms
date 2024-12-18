#include <stdio.h>
void main()
{
    int n,rev=0,rem,temp;
    printf("enter the values of n:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
if(temp==rev)
{
printf("the given number is palindrome");
}
else{
    printf("the given number is not a palindrome");
}
}
