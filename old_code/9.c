//Write a program to find the sum of all the odd numbers for a given limit
// in1 : int(limit)  op : int(sum)
#include <stdio.h>
void main()
{
    int limit, s,i;
    s = 0;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    for(i=1;i< limit; i+=2)
    {
        if (i+2 < limit)
           printf("%d + ",i);
        else 
           printf("%d",i);
        s += i;
    }
    printf(" = %d \n",s);
    printf("Sum of all the odd numbers : %d\n",s);     
}