// Write a program to interchange the values of two arrays.
// Program should accept an array from the user, swap the values of two arrays and display it on the console
// in1 : int(a) in2 : int(b) op : int
#include<stdio.h>
void main()
{
  int i,n ;
  int swap;
  printf("Enter the number of elements in the array : ");
  scanf("%d",&n);
  int arr[n];
  int arr2[n];
  
  // create an array
  printf("\nEnter array 1 elements : \n");
  for(i=0;i<n;i++)
  {

      printf("idx %d : ",i);
      scanf("%d",&arr[i]);
  }
  printf("\nEnter array 2 elements : \n");
  for(i=0;i<n;i++)
  {
      printf("idx %d : ",i);
      scanf("%d",&arr2[i]);
  }
  // swap the values of two arrays 
    printf("\nswapping elements .. \n\n" );
    for(i=0;i<n;i++)
    {
        swap = arr[i];
        arr[i] = arr2[i];
        arr2[i] = swap;
    }
   // display it on the console 
    printf(" ARRAY 1 \t ARRAY 2\n");
    for(i=0;i<n;i++)
    {
        printf("idx %d : %d \t idx %d : %d\n",i,arr[i],i,arr2[i]);
    }
        
}