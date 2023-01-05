// Write a program to find the number of even numbers in an array
// The program should accept an array and display the number of even numbers contained in that array
#include <stdio.h>
void main()
{
    int i,n,count;
    count = 0;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements of the array :\n"); 
    for(i =0 ; i<n ; i++)
    {
        printf("idx %d : ",i);
        scanf("%d",&arr[i]);
    }
    // display the number of even numbers contained in that array
    for(i =0 ; i<n ; i++)
    {
        if (arr[i]%2 == 0)
        {
            count+=1;
        }
    }
    printf("\nnumber of even numbers : %d\n",count);
}
