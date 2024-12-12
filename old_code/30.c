//Read random numbers from the user, find the maximum number in the list of numbers
//Use at least one function
//The function should return a value to main function
#include<stdio.h>
    
void max(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]>max)
        {
           max=arr[i]; 
        }
    }
    printf("maximum number in the list : %d\n",max);
}
void main()
{
    int n;
    printf("Enter number of elements in the list : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max(arr,n);
}