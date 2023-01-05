// The program should accept 3 inputs from the user and calculate simple interest for the given inputs. Formula: SI=(P*R*n)/100)
// in1 : Principal amount (int P)  in2 : Interest rate (float R)  in2 :  Number of years ( float n)  
// op : Simple Interest (float SI)

#include<stdio.h>
void main()
{
    int P;
    float R , n , SI;
    printf("enter principal amount (p) : ");
    scanf("%d",&P);
    printf("enter interest rate (r) : ");
    scanf("%f",&R);
    printf("enter number of years (n) : ");
    scanf("%f",&n);
    SI = (P*R*n)/100;
    printf("\n");
    printf("Simple Interest rate = (P*R*n)/100 = %f",SI);
    printf("\n");
}

