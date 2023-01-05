// pattern
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<n/2;i++)
    {
        for(int j = 0;j < i;j++)
        {
            printf("*");
        }
        for(int k = 2;k<n-2*i;k++)
        {
            printf(" ");
        }
        for(int l = 0;l<i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
}