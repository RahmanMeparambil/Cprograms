// Write a program to check whether a student has passed or failed in a subject after he or she enters their mark (pass mark for a subject is 50 out of 100).
// in1 : float(marks)
// op  : 'PASSED' or 'FAILED'

#include<stdio.h>
void main()
{
    float mark;
    printf("Enter mark : ");
    scanf("%f",&mark);
    if (mark > 50) 
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}