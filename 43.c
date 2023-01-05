// there are two solutions for this problem 
// a ) sort the array in decsenting order , and take the second element
// b ) track two variable which contains largest and second largest elements
# include<stdio.h>
# include<math.h>

void sorted_array(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        for(int j =i ;j<length;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void display(int arr[],int length)
{
    printf("[");
    for(int i=0;i<length;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("]");
}

int second_largest_sort(int arr[],int length)
{
    int idx = 1;
    int temp = arr[0];
    while((temp == arr[idx]) && (idx<length))
    {
        idx+=1;
    }
    //printf("%d",arr[idx]);
    return arr[idx];
}

int second_largest(int arr[],int n)
{
    int v1 = arr[0];
    int v2=arr[1];
    for(int i = 0;i<n;i++)
    {
        //printf("\n %d : %d ",v1,v2);
      if (arr[i] > v1)
      {
        v2 = v1;
        v1 = arr[i];
      }
    }
    return v2;
}

void main()
{
    int n=10;
    int arr[n];
    int sorted[n];
    
    //printf("%s",s);
    printf("enter array elements :");
    for(int i=0;i<n;i++)
    {
        printf("\nidx %d : ",i);
        scanf("%d",&arr[i]);
    }
    sorted_array(arr,n);
    display(arr,n);
    int element = second_largest_sort(arr,n);
    printf("\nsecond_largest element (using sorting) : %d \n",element);
    element = second_largest(arr,n);
    printf("second_largest element (using two values) : %d \n",element);
    
}