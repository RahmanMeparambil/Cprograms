//  pattern
#include<stdio.h>

void main()
{
        int i,j,p;
        int n = 4 ;
        p = 1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",p++); 
            }
            printf("\n");
        }
}