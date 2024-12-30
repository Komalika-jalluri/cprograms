#include <stdio.h>
void main() {
    int i,j;
    char n='a';
    for(i=0;i<5;++i)
    {
        for(j=0;j<i;++j)
        {
            printf("%c\t",n++);
        }
        printf("\n");
    }
    }
    
