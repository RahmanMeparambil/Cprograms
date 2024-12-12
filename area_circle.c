/* this program demonstrates how to find area of a circle */

#include <stdio.h>

// definition section
#define PI 3.14159

// variable declaration
float radius ;
float area(float radius);

// main function
int main()
{
    printf("Enter two numbers : ");
    scanf("%f",&radius);
    printf("%f",area(radius));  

}

// sub functions
float area(float radius){
   return PI*radius*radius;
}
