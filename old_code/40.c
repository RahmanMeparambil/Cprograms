// program to multiply the adjacent values of an array and store it in an another array
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    int arr2[n-1];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        //printf(" %d : %d \n" , arr[i],arr[i+1]);
        arr2[i] = arr[i]*arr[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",arr2[i]);
    }
}