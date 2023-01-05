//Write a program to sort an array in descending order
//Program should accept an array, sort the array values in descending order and display it
#include<stdio.h>
void main()
{
  int i,j,n,swap;
  printf("Enter the number of elements in the array : ");
  scanf("%d",&n);
  int arr[n];
  
  // create an array
  printf("\nEnter array elements : \n");
  for(i=0;i<n;i++)
  {

      printf("idx %d : ",i);
      scanf("%d",&arr[i]);
  }
  // sort the array in descending order
  for(i=0;i<n;i++)
  {
      // bubble sort
      for (j=i+1;j<n;j++)
      {
        if (arr[i] < arr[j])
          {
              swap = arr[i];
              arr[i] = arr[j];
              arr[j] = swap;
          }
      }
  }
   printf("Sorted Array : ");
   for(i=0;i<n;i++)
   {

       printf("%d",arr[i]);
   }
  printf("\n");
  }
   