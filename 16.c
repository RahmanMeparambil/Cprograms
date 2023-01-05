// Write a program to add to two dimensional arrays
// Program should accept two 2D arrays and display its sum
// Two matrices must have an equal number of rows and columns to be added.
#include<stdio.h>
void main()
{
    int i,j;
    int r,c,s;
    printf("Enter number of rows in the array : ");
    scanf("%d",&r);
    printf("Enter number of columns in the array : ");
    scanf("%d",&c);
    int arr1[r][c];
    int arr2[r][c];
    
    // insert elements
    printf("Enter array 1 elements : \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter array 2 elements : \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    // add both matrices
    printf("Adding both matrices .. \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            arr1[i][j] += arr2[i][j];
        }
    }
    
    // print multidimentional array
    printf("result : \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
}