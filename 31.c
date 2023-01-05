// Read a random number (n) from the user and Generate nth  Fibonacci 
// a series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers. 
#include<stdio.h>
int fibo(int n,int  a, int b)
{
    int temp;
    temp = a+b;
    a = b;
    b = temp;
    
    if (n == 0)
    {
        return b;
    }
    return fibo(n-1,a,b);
}

void main()
{
    int n;
    printf("enter n to get nth Fibonacci : ");
    scanf("%d",&n);
    int b = fibo(n,0,1);
    printf("nth fibonacci : %d\n",b);
}