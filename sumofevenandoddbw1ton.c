#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,sumeven=0,sumodd=0;
    printf("enter the values of n:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
        {
        sumeven=sumeven+i;
        }
        else
        {
            sumodd=sumodd+i;
        }
        }
        printf("the difference is %d",abs(sumeven-sumodd));
    }

