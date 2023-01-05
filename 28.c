// Read some numbers from the user and find the repeating numbers?
#include<stdio.h>

void in_memo(int memo[],int element)
{
    for(int i=0;memo[i]!='\0';i++)
    {
        if (memo[i] == element)
        {
            printf("%d\n",element);
        }
        else
        {
            memo[i] = element;
            memo[i+1] = '\0';
        }
            
    }
}

void main()
{
    int arr[5];
    int memo[5];
    printf("Enter some numbers from the user and find the repeating numbers : \n");
    for(int i=0;i<5;i++)
    {
        printf("idx %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        in_memo(memo,arr[i]);
    }
    
    
}