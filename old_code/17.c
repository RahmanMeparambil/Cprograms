// Write a program to accept an array and display it on the console using functions
// Program should contain 3 functions including main() function
#include<stdio.h>
int *create_array()
{
   printf("\n");
   printf("\nFunction : Create an array ");
   int i;
   static int arr[5];
   printf("\nEnter array elements : \n");
   for( i =0;i<5;i++ )
   {
       printf("\nidx %d : ",i);
       scanf("%d",&arr[i]);
   }
   return arr;
}

void display_array(int arr[])
{
    printf("\n");
    printf("\nFunction : Display an array\n");
    for(int i =0 ; i<5;i++)
    {
        printf("idx %d : %d \t",i,arr[i]);
    }
}


void main()
{
   printf("Function : Main");
   int *arr = create_array();
   display_array(arr);

}
