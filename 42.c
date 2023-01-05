// program to find the frequency of each element in the array
#include<stdio.h>
    //#include "
    int element_in(char arr[],int position)
{
    for(int i=0;i<position;i++)
    {
        if (arr[position] == arr[i])
        {
            return 1;
        }
    }
    return -1;
}
    void main()
{
    int n =10;
    char arr[] = {'a','a','b','b','b','c','\0'};

    // finding frequency of each elemnt in the array
        printf("Frequency of a string : ");
    for(int i=0;arr[i]!='\0';i++)
    {
        int count =1;
        int flag = 0;
        for (int j=i+1;arr[j]!='\0';j++)
        {
            if (element_in(arr,i)==1)
            {
                flag =1;
                break;
            }
            else if (arr[i] == arr[j])
            {
                count+=1;
            }
        }
        if (flag != 1)
        {        
            printf(" %c : %d",arr[i],count);
        }
        else
        {
            flag = 0;
        }
        
    }
}