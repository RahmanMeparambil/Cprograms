// find smallest of three numbers using ternary operator
#include<stdio.h>
void main()
{
    int a=1,b=2,c=3;
    printf("a : %d   b : %d   c : %d  ",a,b,c);
    
    int temp = ((a<b)?a:b);
    int result = ((temp<c)?temp:c);
    printf("\nsmallest number : %d\n",result);
}