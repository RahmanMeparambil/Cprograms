//Write a program to print the multiplication table of given numbers.
// in1 : int(number) op : int(multiplication table)

#include<stdio.h>
void main()
{
    int n,i,s;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Multiplication Table :" );
    for(i=0;i<=10;i++)
    {
        printf("\n");
        s = i*n;
        printf("%d * %d = %d",i,n,s);
    }
    printf("\n");
}
