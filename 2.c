// Accept two inputs from the user and output its sum.
// in1 : int in2 :float op :float

#include <stdio.h>

    
void main()
{

    int a;
    float b;
    float sum;
    printf("enter a (integer) : ");
    scanf("%d",&a);
    printf("enter b (float): ");
    scanf("%f",&b);
    sum = a + b;
    printf("sum : %f",sum);
    printf("\n");
    
}