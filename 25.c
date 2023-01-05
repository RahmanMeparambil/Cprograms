// Read random numbers [ 22,87,178,34,10,45,22,89,31] from user and sort numbers in descending Order?
#include<stdio.h>
 
// display the array
void display(int arr[],int n)
{
    printf("array elements : ");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

//sort the array
void insertion_sort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void main()
{
    int n;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    //read array elements 
    printf("\nEnter array elements : ");
    for(int i=0;i<n;i++)
    {
        printf("\nidx %d : ",i);
        scanf("%d",&arr[i]);
    }
    //print array elements
    printf("\n");
    display(arr,n);
    //sort arry
    insertion_sort(arr,n);
    printf("sorted !\n");
    display(arr,n);
    
}