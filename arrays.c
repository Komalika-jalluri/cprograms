#array sample program

#include <stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter list of elements: ");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        printf("%d\t",a[i]);
    }
}

#AVG OF ARRAYS

int main()
{
    int a[10],n,i,sum=0,avg=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter list of elements: ");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        sum=sum+a[i];
    }
    avg=sum/2;
    printf("The average of elements of array %d",avg);
    return 0;
}

#SUM OF ARRAYS
#include <stdio.h>

int main()
{
    int a[10],n,i,sum=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter list of elements: ");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        sum=sum+a[i];
    }
    printf("The sum of elements of array %d",sum);
    return 0;
}

#MAX VALUE OF ARRAYS

#include <stdio.h>

int main()
{
    int a[10],n,i,max;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter list of elements: ");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;++i)
    {
       if(a[i]>max)
       {
           max=a[i];
       }
    }
    printf("The max value of elements of array %d",max);
    return 0;
}

#MIN VALUE OF ARRAY

#include <stdio.h>

int main()
{
    int a[10],n,i,min;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter list of elements: ");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;++i)
    {
       if(a[i]<min)
       {
           min=a[i];
       }
    }
    printf("The min value of elements of array %d",min);
    return 0;
}

#DUPLICATES IN ARRAY

#include <stdio.h>

int main()
{
    int a[10],n,i,j,count=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter list of elements: ");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
         {
           if(a[i]==a[j])
             {
               count++;
               break;
              }
         }
    }
    printf("Total no of duplicates in array %d",count);
    return 0;
}

#COPY OF ONE ARRAY TO ANOTHER
#include<stdio.h>
int main()
{
    int a[10],b[10],n,i;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;++i)
    {
     scanf("%d",&a[i]);   
    }
    for(i=0;i<n;++i)
    {
        b[i]=a[i];
    }
     for(i=0;i<n;++i)
     {
         printf("\n%d",b[i]);
     }
     return 0;
}

#SUM OF EVEN NOS OF ARRAY

#include<stdio.h>
int main()
{
    int a[10],n,i,sum=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;++i)
    {
     scanf("%d",&a[i]);   
    }
    for(i=0;i<n;++i)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
    }
         printf("\n the sum of elements of array %d",sum);
     return 0;
}

#REVERSE OF ELEMENTS IN ARRAY

#include<stdio.h>
int main()
{
    int a[10],n,i,rev;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;++i)
    {
     scanf("%d",&a[i]);   
    }
    for(i=n-1;i>0;--i)
    {
       printf("\n%d",a[i]);
    }  
     return 0;
}
