// matrix addition
#include<stdio.h>
void display(int arr[][3])
{
    printf("visualization : \n");
    for(int i=0;i<3;i++)
    {
        if (i>0)
        {
            printf("\n");
        }
        printf("[[");
        for(int j=0;j<3;j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("]");
        
    }
    printf("]");
    printf("\n");
}
void addition(int arr1[][3],int arr2[][3],int sum[][3])
{
    printf("\nOperation : Addition\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
}
void multiplication(int arr1[][3],int arr2[][3],int sum[][3])
{
    printf("\nOperation : Multiplication\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j]=0;
            for(int k=0;k<3;k++)
            {
                sum[i][j]+=arr1[i][k]*arr2[k][j];   
            }
        }
    }
}
void subtraction(int arr1[][3],int arr2[][3],int sum[][3])
{
    printf("\nOperation : Subtraction\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j] = arr1[i][j]-arr2[i][j];
        }
    }
}
void transpose(int arr[][3],int sum[][3])
{
    printf("\nOperation : Transpose\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[j][i] = arr[i][j];
        }
    }
}
void main()
{
    int arr1[3][3] = {{1,2,3},{3,2,1},{4,5,6}};
    int arr2[3][3] = {{1,2,3},{3,2,1},{4,5,6}};
    int sum[3][3];
    printf("array 1 :\n");
    display(arr1);
    printf("array 2 :\n");
    display(arr2);
    addition(arr1,arr2,sum);
    display(sum);
    multiplication(arr1,arr2,sum);
    display(sum);
    subtraction(arr1,arr2,sum);
    display(sum);
    transpose(arr1,sum);
    display(sum);
}
    
    