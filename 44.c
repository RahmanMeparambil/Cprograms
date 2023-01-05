// Remove Duplicate Element in an array
#include<stdio.h>
int element_is_present(int array[],int position,int size)
{
    for(int i=position+1;i<size;i++)
    {
        if (array[i] == array[position])
        {
            return 1;
        }
    }
    return -1;
}

void remove_element(int arr[],int position,int size)
{
    for (int i=position;i<size;i++)
    {
        arr[i]=arr[i+1];
        size--;
    }
}

void display(int arr[],int size)
{
    printf("[");
    for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("]");
}

void main()
{
    int n=10;
    int arr[n];
    printf("Enter array elements : \n");
    for(int i=0;i<n;i++)
    {
        printf("idx %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if (element_is_present(arr,arr[i],n) == 1)
        {
            remove_element(arr,i,n);
            n--;
        }
    }
    display(arr,n);
}